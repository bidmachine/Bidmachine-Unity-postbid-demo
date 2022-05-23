using System;
using System.Diagnostics.CodeAnalysis;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using BidMachineAds.Unity.Api;
using BidMachineAds.Unity.Common;
using AdmobAds = GoogleMobileAds.Api;
using UnityEngine.Android;
using UnityEngine.UI;
using UnityEngine.Events;
using System.Linq;

#pragma warning disable 649

[SuppressMessage("ReSharper", "InconsistentNaming")]
[SuppressMessage("ReSharper", "InvertIf")]
public class BidMachineDemoController : MonoBehaviour, IInterstitialAdListener, IRewardedAdListener, IBannerListener,
    IBannerRequestListener, IInterstitialRequestListener, IRewardedRequestListener
{
    [SerializeField] public Toggle tgTesting;
    [SerializeField] public Toggle tgLogging;
    [SerializeField] public NativeAdView nativeAdView;

    private TargetingParams targetingParams;
    private PriceFloorParams priceFloorParams;
    private SessionAdParams sessionAdParams;

    private InterstitialRequest interstitialRequest;
    private InterstitialRequestBuilder interstitialRequestBuilder;
    private InterstitialAd interstitialAd;

    private RewardedRequest rewardedRequest;
    private RewardedRequestBuilder rewardedRequestBuilder;
    private RewardedAd rewardedAd;

    private NativeRequest nativeRequest;
    private NativeRequestBuilder nativeRequestBuilder;
    private NativeAd nativeAd;

    private BannerRequest bannerRequest;
    private BannerRequestBuilder bannerRequestBuilder;
    private BannerView bannerView;
    private AdmobAds.BannerView admobBannerView;
    private AdmobAds.InterstitialAd admobInterstitial;
    private AdmobAds.RewardedAd admobRewarded;

    public UnityEvent OnAdLoadedEvent;
    public UnityEvent OnAdFailedToLoadEvent;
    public UnityEvent OnAdOpeningEvent;
    public UnityEvent OnAdFailedToShowEvent;
    public UnityEvent OnUserEarnedRewardEvent;
    public UnityEvent OnAdClosedEvent;

    //list of banner ads
    public static List<KeyValuePair<string, double>> bannerList = new List<KeyValuePair<string, double>>();
    //list of interstitial ads
    public static List<KeyValuePair<string, double>> interstitialList = new List<KeyValuePair<string, double>>();
    //list of rewarded ads
    public static List<KeyValuePair<string, double>> rewardedList = new List<KeyValuePair<string, double>>();

    //list of admob banner ad units
    public static List<KeyValuePair<string, double>> admobBannerList = new List<KeyValuePair<string, double>>{
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/6300978111", 1.0),
        new KeyValuePair<string, double>("ADMOB_BANNER_AD_UNIT_ID_2", 2.0),
        new KeyValuePair<string, double>("ADMOB_BANNER_AD_UNIT_ID_3", 3.0),
        new KeyValuePair<string, double>("ADMOB_BANNER_AD_UNIT_ID_4", 4.0),
        new KeyValuePair<string, double>("ADMOB_BANNER_AD_UNIT_ID_5", 5.0),
        new KeyValuePair<string, double>("ADMOB_BANNER_AD_UNIT_ID_6", 6.0),
        new KeyValuePair<string, double>("ADMOB_BANNER_AD_UNIT_ID_7", 7.0),
        new KeyValuePair<string, double>("ADMOB_BANNER_AD_UNIT_ID_8", 8.0),
        new KeyValuePair<string, double>("ADMOB_BANNER_AD_UNIT_ID_9", 9.0),
        new KeyValuePair<string, double>("ADMOB_BANNER_AD_UNIT_ID_10", 10.0)
        };

    //list of admob interstitial ad units
    public static List<KeyValuePair<string, double>> admobInterstitialList = new List<KeyValuePair<string, double>>{
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/1033173712", 1.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/1033173712", 2.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/1033173712", 3.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/4411468910", 4.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/4411468910", 5.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/4411468910", 6.0),
        new KeyValuePair<string, double>("ADMOB_INTERSTITIAL_AD_UNIT_ID_7", 7.0),
        new KeyValuePair<string, double>("ADMOB_INTERSTITIAL_AD_UNIT_ID_8", 8.0),
        new KeyValuePair<string, double>("ADMOB_INTERSTITIAL_AD_UNIT_ID_9", 9.0),
        new KeyValuePair<string, double>("ADMOB_INTERSTITIAL_AD_UNIT_ID_10", 10.0)
        };

    //list of admob interstitial ad units
    public static List<KeyValuePair<string, double>> admobRewardedList = new List<KeyValuePair<string, double>>{
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/5224354917", 1.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/5224354917", 2.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/5224354917", 3.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/1712485313", 4.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/1712485313", 5.0),
        new KeyValuePair<string, double>("ca-app-pub-3940256099942544/1712485313", 6.0),
        new KeyValuePair<string, double>("ADMOB_REWARDED_AD_UNIT_ID_7", 7.0),
        new KeyValuePair<string, double>("ADMOB_REWARDED_AD_UNIT_ID_8", 8.0),
        new KeyValuePair<string, double>("ADMOB_REWARDED_AD_UNIT_ID_9", 9.0),
        new KeyValuePair<string, double>("ADMOB_REWARDED_AD_UNIT_ID_10", 10.0)
    };


    // Insert your Applovin credentials here

    private const string MaxSdkKey = "nEbqcf3QG6eAEo2g-uiJ68vz5F79ESvmug4ylkTR3bptCQ3zLDKdG6gp_CfhqOg9cu6MP5yT88tGDhNhbHXL60";//"ENTER_MAX_SDK_KEY_HERE";
    private const string InterstitialAdUnitId = "6c5387d831b45a43";//"ENTER_INTERSTITIAL_AD_UNIT_ID_HERE";
    private const string RewardedAdUnitId = "ENTER_REWARD_AD_UNIT_ID_HERE";
    private const string RewardedInterstitialAdUnitId = "ENTER_REWARD_INTER_AD_UNIT_ID_HERE";
    private const string BannerAdUnitId = "84f8469ecb805877";//"ENTER_BANNER_AD_UNIT_ID_HERE";
    private const string MRecAdUnitId = "ENTER_MREC_AD_UNIT_ID_HERE";
   

    private void Start()
    {
        tgTesting.isOn = true;
        tgLogging.isOn = true;

        // priceFloorParams = new PriceFloorParams();
        // priceFloorParams.addPriceFloor("123", 1.2d);

        sessionAdParams = new SessionAdParams()
            .setSessionDuration(123)
            .setImpressionCount(123)
            .setClickRate(1.2f)
            .setIsUserClickedOnLastAd(true)
            .setCompletionRate(1.3f)
            .setLastBundle("test")
            .setLastAdomain("test");
    }

    public void InitializeSDK()
    {
        MaxSdkCallbacks.OnSdkInitializedEvent += sdkConfiguration =>
        {
            // AppLovin SDK is initialized, configure and start loading ads.
            Debug.Log("MAX SDK Initialized");

            InitializeInterstitialAdsApplovin();
            InitializeRewardedAdsApplovin();
            InitializeBannerAdsApplovin();
        };
        MaxSdk.SetSdkKey(MaxSdkKey);
        MaxSdk.InitializeSdk();
        BidMachine.setTargetingParams(
            new TargetingParams()
                .setUserId("1")
                .setStoreId("12345")
                .setGender(TargetingParams.Gender.Female)
                .setBirthdayYear(1991)
                .setKeyWords(new[] { "games, sport" })
                .setCountry("Belarus")
                .setCity("Minsk")
                .setZip("220059")
                .setStoreUrl("https://store.url")
                .setStoreCategory("cards")
                .setStoreId("12345")
                .setStoreSubCategories(new[] { "games", "cards" })
                .setFramework("unity")
                .setPaid(true)
                .setDeviceLocation("", 22.0d, 22.0d)
                .addBlockedApplication("com.appodeal.test")
                .addBlockedAdvertiserIABCategory("IAB-71")
                .addBlockedAdvertiserDomain("ua")
                .setExternalUserIds(new[]
                    {
                        new ExternalUserId("sourceId_1", "1"),
                        new ExternalUserId("sourceId_2", "2")
                    }
                ));

        BidMachine.setPublisher(new Publisher("1", "Gena", "ua", new[] { "games, cards" }));
        //BidMachine.setEndpoint("https://test.com");
        BidMachine.setSubjectToGDPR(true);
        //BidMachine.setCoppa(true);
        BidMachine.setConsentConfig(true, "test consent string");
        BidMachine.setUSPrivacyString("test_string");
        BidMachine.checkAndroidPermissions(Permission.CoarseLocation);
        BidMachine.setLoggingEnabled(tgLogging.isOn);
        BidMachine.setTestMode(tgTesting.isOn);
        BidMachine.initialize("1");

        // Initialize admob
        AdmobAds.MobileAds.Initialize(initStatus => { });
    }

    #region Admob ads

    #region Admob banners

    private void PrintStatus(string message)
    {
        Debug.Log(message);
    }

    public void RequestAdmobBannerAd(String admobBannerAdUnit)
    {
        PrintStatus("Requesting Banner ad.");

        // Create a 320x50 banner at top of the screen
        admobBannerView = new AdmobAds.BannerView(admobBannerAdUnit, AdmobAds.AdSize.Banner, AdmobAds.AdPosition.Bottom);

        // Add Event Handlers
        admobBannerView.OnAdLoaded += (sender, args) =>
        {
            PrintStatus("Banner ad loaded.");
            OnAdLoadedEvent.Invoke();
            //didn't find a way to show banner on the button click. It shows automatically after loading
            admobBannerView.Hide();
            //add the necessary admob ad unit to the bannerList
            var admobPrice = admobBannerList.Find(x => x.Key == admobBannerAdUnit).Value;
            bannerList.Add(new KeyValuePair<string, double>("admob", admobPrice));
        };
        admobBannerView.OnAdFailedToLoad += (sender, args) =>
        {
            PrintStatus("Banner ad failed to load with error: "+args.LoadAdError.GetMessage());
            OnAdFailedToLoadEvent.Invoke();
        };
        admobBannerView.OnAdOpening += (sender, args) =>
        {
            PrintStatus("Banner ad opening.");
            OnAdOpeningEvent.Invoke();
        };
        admobBannerView.OnAdClosed += (sender, args) =>
        {
            PrintStatus("Banner ad closed.");
            OnAdClosedEvent.Invoke();
        };
        admobBannerView.OnPaidEvent += (sender, args) =>
        {
            string msg = string.Format("{0} (currency: {1}, value: {2}",
                                        "Banner ad received a paid event.",
                                        args.AdValue.CurrencyCode,
                                        args.AdValue.Value);
            PrintStatus(msg);
            
        };

        // Create an empty ad request.
        AdmobAds.AdRequest admobBannerRequest = new AdmobAds.AdRequest.Builder().Build();

        // Load a banner ad
        admobBannerView.LoadAd(admobBannerRequest);
        
    }

    public void ShowAdmobBanner()
    {
        if (admobBannerView != null)
        {
            admobBannerView.Show();
    
        }
    }

    #endregion

    #region Admob interstitial

    public void RequestAdmobInterstitialAd(String admobInterstitialAdUnit)
    {
        // Initialize an InterstitialAd.
        admobInterstitial = new AdmobAds.InterstitialAd(admobInterstitialAdUnit);

        admobInterstitial.OnAdLoaded += (sender, args) =>
        {
            PrintStatus("Interstitial ad loaded.");
            OnAdLoadedEvent.Invoke();
            //add the necessary admob ad unit to the interstitialList
            var admobPrice = admobInterstitialList.Find(x => x.Key == admobInterstitialAdUnit).Value;
            interstitialList.Add(new KeyValuePair<string, double>("admob", admobPrice));
        };
        admobInterstitial.OnAdFailedToLoad += (sender, args) =>
        {
            PrintStatus("Interstitial ad failed to load with error: "+args.LoadAdError.GetMessage());
            OnAdFailedToLoadEvent.Invoke();
        };
        admobInterstitial.OnAdOpening += (sender, args) =>
        {
            PrintStatus("Interstitial ad opening.");
            OnAdOpeningEvent.Invoke();
        };
        admobInterstitial.OnAdClosed += (sender, args) =>
        {
            PrintStatus("Interstitial ad closed.");
            OnAdClosedEvent.Invoke();
        };
        admobInterstitial.OnAdDidRecordImpression += (sender, args) =>
        {
            PrintStatus("Interstitial ad recorded an impression.");
        };
        admobInterstitial.OnAdFailedToShow += (sender, args) =>
        {
            PrintStatus("Interstitial ad failed to show.");
        };
        admobInterstitial.OnPaidEvent += (sender, args) =>
        {
            string msg = string.Format("{0} (currency: {1}, value: {2}",
            "Interstitial ad received a paid event.",
            args.AdValue.CurrencyCode,
            args.AdValue.Value);
            PrintStatus(msg);
        };

        // Create an empty ad request.
        AdmobAds.AdRequest admobInterstitialRequest = new AdmobAds.AdRequest.Builder().Build();
        // Load the interstitial with the request.
        admobInterstitial.LoadAd(admobInterstitialRequest);
    }

    public void ShowAdmobInterstitial()
    {
        if (admobInterstitial.IsLoaded()) {
            admobInterstitial.Show();
        }
    }

    #endregion

    #region Admob rewarded

    public void RequestAdmobRewardedAd(String admobRewardedAdUnit)
    {
        admobRewarded = new AdmobAds.RewardedAd(admobRewardedAdUnit);

        admobRewarded.OnAdLoaded += (sender, args) =>
        {
            PrintStatus("Rewarded ad loaded.");
            OnAdLoadedEvent.Invoke();
            //add the necessary admob ad unit to the rewardedList
            var admobPrice = admobRewardedList.Find(x => x.Key == admobRewardedAdUnit).Value;
            rewardedList.Add(new KeyValuePair<string, double>("admob", admobPrice));
        };
        admobRewarded.OnUserEarnedReward += (sender, args) =>
        {
            PrintStatus("User earned Reward ad reward: "+args.Amount);
            OnUserEarnedRewardEvent.Invoke();
        };
        admobRewarded.OnAdClosed += (sender, args) =>
        {
            PrintStatus("Reward ad closed.");
            OnAdClosedEvent.Invoke();
        };

        // Create an empty ad request.
        AdmobAds.AdRequest admobRewardedRequest = new AdmobAds.AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        admobRewarded.LoadAd(admobRewardedRequest);
    }

    public void ShowAdmobRewarded()
    {
        if (admobRewarded != null)
            {
                admobRewarded.Show();
            }
    }
    #endregion

    #endregion

    #region Applovin Banner Ad Methods

    private void InitializeBannerAdsApplovin()
    {
        // Attach Callbacks
        MaxSdkCallbacks.Banner.OnAdLoadedEvent += OnBannerAdLoadedEvent;
        MaxSdkCallbacks.Banner.OnAdLoadFailedEvent += OnBannerAdFailedEvent;
        MaxSdkCallbacks.Banner.OnAdClickedEvent += OnBannerAdClickedEvent;
        MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent += OnBannerAdRevenuePaidEvent;

        // Banners are automatically sized to 320x50 on phones and 728x90 on tablets.
        // You may use the utility method `MaxSdkUtils.isTablet()` to help with view sizing adjustments.
        // MaxSdk.CreateBanner(BannerAdUnitId, MaxSdkBase.BannerPosition.BottomCenter);
        MaxSdk.StopBannerAutoRefresh(BannerAdUnitId);

        // Set background or background color for banners to be fully functional.
        MaxSdk.SetBannerBackgroundColor(BannerAdUnitId, Color.black);
    }

    private void OnBannerAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Banner ad is ready to be shown.
        // If you have already called MaxSdk.ShowBanner(BannerAdUnitId) it will automatically be shown on the next ad refresh.
        Debug.Log("Banner ad loaded");
        // Ad revenue
        double revenue = adInfo.Revenue;
        //add applovin ad price to the compare list
        bannerList.Add(new KeyValuePair<string, double>("applovin_max", revenue*1000));
        MakePostBidBanner(adInfo);
    }

    private void OnBannerAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        // Banner ad failed to load. MAX will automatically try loading a new ad internally.
        Debug.Log("Banner ad failed to load with error code: " + errorInfo.Code);
        MakePostBidBannerError();
    }

    private void OnBannerAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        Debug.Log("Banner ad clicked");
    }

    private void OnBannerAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Banner ad revenue paid. Use this callback to track user revenue.
        Debug.Log("Banner ad revenue paid");

        // Ad revenue
        double revenue = adInfo.Revenue;
        
        // Miscellaneous data
        string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD" in most cases!
        string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
        string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
        string placement = adInfo.Placement; // The placement this ad's postbacks are tied to
        
    }

    #endregion

    public void MakePostBidBanner(MaxSdkBase.AdInfo adInfo)
    {
          // Ad revenue
          double revenue = adInfo.Revenue;
          if (revenue > 0)
          {
            priceFloorParams = new PriceFloorParams();
            priceFloorParams.addPriceFloor("applovin_max", revenue*1000+0.01);  
            bannerRequest = new BannerRequestBuilder()
            .setSize(BannerSize.Size_320х50)
            .setPriceFloorParams(priceFloorParams)
            .setListener(this)
            .build();
          } 
          else
          {
             RequestBannerBidmachine();
          }
    }

    public void MakePostBidBannerError()
    {
        RequestBannerBidmachine();
    }

    public void RequestBannerBidmachine()
    {
        bannerRequest = new BannerRequestBuilder()
        //set banner size
        .setSize(BannerSize.Size_320х50)
        // .setPriceFloorParams(priceFloorParams)
        .setListener(this)
        .build();
        
        if (bannerView == null)
        {
            bannerView = new BannerView();
            bannerView.setListener(this);
            bannerView.load(bannerRequest);
        }
    }

    #region Applovin Interstitial Ad Methods

    private void InitializeInterstitialAdsApplovin()
    {
        // Attach callbacks
        MaxSdkCallbacks.Interstitial.OnAdLoadedEvent += OnInterstitialLoadedEvent;
        MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent += OnInterstitialFailedEvent;
        MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent += InterstitialFailedToDisplayEvent;
        MaxSdkCallbacks.Interstitial.OnAdHiddenEvent += OnInterstitialDismissedEvent;
        MaxSdkCallbacks.Interstitial.OnAdRevenuePaidEvent += OnInterstitialRevenuePaidEvent;
        
        Debug.Log("---Interstitial initialized");
        
    }

    void LoadInterstitialApplovin()
    {
        MaxSdk.LoadInterstitial(InterstitialAdUnitId);
    }

    void ShowInterstitialApplovin()
    {
        if (MaxSdk.IsInterstitialReady(InterstitialAdUnitId))
        {
            Debug.Log("Showing");
            MaxSdk.ShowInterstitial(InterstitialAdUnitId);
        }
        else
        {
            Debug.Log("Ad not ready");
        }
    }

    public void MakePostBidInterstitial(MaxSdkBase.AdInfo adInfo)
    {
          // Ad revenue
          double revenue = adInfo.Revenue;
          if (revenue > 0)
          {
            priceFloorParams = new PriceFloorParams();
            priceFloorParams.addPriceFloor("applovin_max", revenue*1000+0.01);  
            interstitialRequest = new InterstitialRequestBuilder()   
             
              .setPriceFloorParams(priceFloorParams)
              .setListener(this)
              .build();
          } 
          else
          {
            RequestInterstitialBidmachine();
          }
    }

    public void MakePostBidInterstitialError()
    {
          RequestInterstitialBidmachine();
    }

    public void RequestInterstitialBidmachine()
    {
        interstitialRequest = new InterstitialRequestBuilder()
            //.setPriceFloorParams(priceFloorParams)
            .setListener(this)
            .build();
            
            if (interstitialAd == null)
            {
                interstitialAd = new InterstitialAd();
                interstitialAd.setListener(this);
                interstitialAd.load(interstitialRequest);
            }
    }


    private void OnInterstitialLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad is ready to be shown. MaxSdk.IsInterstitialReady(interstitialAdUnitId) will now return 'true'
        Debug.Log("Interstitial loaded");
        double revenue = adInfo.Revenue;
        //add applovin ad price to the compare list
        interstitialList.Add(new KeyValuePair<string, double>("applovin_max", revenue*1000));
        
        MakePostBidInterstitial(adInfo);
    }

    private void OnInterstitialFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        // Interstitial ad failed to load. We recommend retrying with exponentially higher delays up to a maximum delay (in this case 64 seconds).
        
        Debug.Log("Interstitial failed to load with error code: " + errorInfo.Code);
        MakePostBidInterstitialError();
    }

    private void InterstitialFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad failed to display. We recommend loading the next ad
        Debug.Log("Interstitial failed to display with error code: " + errorInfo.Code); 
    }

    private void OnInterstitialDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad is hidden. Pre-load the next ad
        Debug.Log("Interstitial dismissed");
    }

    private void OnInterstitialRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Interstitial ad revenue paid. Use this callback to track user revenue.
        Debug.Log("Interstitial revenue paid");

        // Ad revenue
        double revenue = adInfo.Revenue;
        
        // Miscellaneous data
        string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD" in most cases!
        string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
        string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
        string placement = adInfo.Placement; // The placement this ad's postbacks are tied to
        
    }

    #endregion

     #region Rewarded Ad Methods

     public void MakePostBidRewarded(MaxSdkBase.AdInfo adInfo)
    {
        // Ad revenue
        double revenue = adInfo.Revenue;          
          if (revenue > 0)
          {
            priceFloorParams = new PriceFloorParams();
            priceFloorParams.addPriceFloor("applovin_max", revenue*1000+0.01);  
            rewardedRequest = new RewardedRequestBuilder()  
             
              .setPriceFloorParams(priceFloorParams)
              .setListener(this)
              .build();
          } 
          else
          {
            RequestRewardedBidmachine();
          }
    }


    public void MakePostBidRewardedError()
    {
         RequestRewardedBidmachine(); 
    }

    public void RequestRewardedBidmachine()
    {
       rewardedRequest = new RewardedRequestBuilder()
            //.setPriceFloorParams(priceFloorParams)
            .setListener(this)
            .build();
            
            if (rewardedAd == null)
            {
                rewardedAd = new RewardedAd();
                rewardedAd.setListener(this);
                rewardedAd.load(rewardedRequest);
            } 
    }

    private void InitializeRewardedAdsApplovin()
    {
        // Attach callbacks
        MaxSdkCallbacks.Rewarded.OnAdLoadedEvent += OnRewardedAdLoadedEvent;
        MaxSdkCallbacks.Rewarded.OnAdLoadFailedEvent += OnRewardedAdFailedEvent;
        MaxSdkCallbacks.Rewarded.OnAdDisplayFailedEvent += OnRewardedAdFailedToDisplayEvent;
        MaxSdkCallbacks.Rewarded.OnAdDisplayedEvent += OnRewardedAdDisplayedEvent;
        MaxSdkCallbacks.Rewarded.OnAdClickedEvent += OnRewardedAdClickedEvent;
        MaxSdkCallbacks.Rewarded.OnAdHiddenEvent += OnRewardedAdDismissedEvent;
        MaxSdkCallbacks.Rewarded.OnAdReceivedRewardEvent += OnRewardedAdReceivedRewardEvent;
        MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent += OnRewardedAdRevenuePaidEvent;

    }

    private void LoadRewardedApplovin()
    {
        MaxSdk.LoadRewardedAd(RewardedAdUnitId);
    }

    private void ShowRewardedApplovin()
    {
        if (MaxSdk.IsRewardedAdReady(RewardedAdUnitId))
        {
            MaxSdk.ShowRewardedAd(RewardedAdUnitId);
        }
    }

    private void OnRewardedAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad is ready to be shown. MaxSdk.IsRewardedAdReady(rewardedAdUnitId) will now return 'true'
         Debug.Log("Rewarded ad loaded");
         double revenue = adInfo.Revenue;
        //add applovin ad price to the compare list
        rewardedList.Add(new KeyValuePair<string, double>("applovin_max", revenue*1000));
        MakePostBidRewarded(adInfo);
    }

    private void OnRewardedAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
    {
        // Rewarded ad failed to load. We recommend retrying with exponentially higher delays up to a maximum delay (in this case 64 seconds).
        MakePostBidRewardedError();
        Debug.Log("Rewarded ad failed to load with error code: " + errorInfo.Code);
        
    }

    private void OnRewardedAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad failed to display. We recommend loading the next ad
        Debug.Log("Rewarded ad failed to display with error code: " + errorInfo.Code);
        
    }

    private void OnRewardedAdDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        Debug.Log("Rewarded ad displayed");
    }

    private void OnRewardedAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        Debug.Log("Rewarded ad clicked");
    }

    private void OnRewardedAdDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad is hidden. Pre-load the next ad
        Debug.Log("Rewarded ad dismissed");
        
    }

    private void OnRewardedAdReceivedRewardEvent(string adUnitId, MaxSdk.Reward reward, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad was displayed and user should receive the reward
        Debug.Log("Rewarded ad received reward");
    }

    private void OnRewardedAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
    {
        // Rewarded ad revenue paid. Use this callback to track user revenue.
        Debug.Log("Rewarded ad revenue paid");

        // Ad revenue
        double revenue = adInfo.Revenue;
        
        // Miscellaneous data
        string countryCode = MaxSdk.GetSdkConfiguration().CountryCode; // "US" for the United States, etc - Note: Do not confuse this with currency code which is "USD" in most cases!
        string networkName = adInfo.NetworkName; // Display name of the network that showed the ad (e.g. "AdColony")
        string adUnitIdentifier = adInfo.AdUnitIdentifier; // The MAX Ad Unit ID
        string placement = adInfo.Placement; // The placement this ad's postbacks are tied to
        
    }

    #endregion

    public void IsInitialized()
    {
        Debug.Log($"isInitialized - {BidMachine.isInitialized()}");
    }

    public void CheckPermissions()
    {
        Debug.Log($"Permission.CoarseLocation - {BidMachine.checkAndroidPermissions(Permission.CoarseLocation)}");
        Debug.Log($"Permission.FineLocation - {BidMachine.checkAndroidPermissions(Permission.FineLocation)}");
    }

    public void RequestPermissions()
    {
        BidMachine.requestAndroidPermissions();
    }

    #region Banner Ad

    public void LoadBanner()
    {
        if (tgTesting.isOn)
        {
            RequestBannerBidmachine();
        }
        else
        {
            MaxSdk.CreateBanner(BannerAdUnitId, MaxSdkBase.BannerPosition.BottomCenter);
        }
    }

    public void ShowBannerView()
    {
        if (tgTesting.isOn)
        {
            ShowBannerBidmachine();
        }
        else
        {
            if (bannerList.Count > 0)
            {
                //sort the list by price
                bannerList.Sort((a, b) => (b.Value.CompareTo(a.Value)));
                //check for the first item with the highest price
                switch (bannerList[0].Key)
                {
                case "applovin_max":
                    MaxSdk.ShowBanner(BannerAdUnitId);
                    break;
                case "bidmachine":
                    ShowBannerBidmachine();
                    break;
                case "admob":
                    ShowAdmobBanner();
                    break;
                }
            }
        
        }
                   
    }

    public string CompareBannerPricesForAdmob()
    {
        if (bannerList.Count > 0)
        {
            bannerList.Sort((a, b) => (b.Value.CompareTo(a.Value)));
            var admobAdUnitkey = admobBannerList.FirstOrDefault(x => x.Value > bannerList[0].Value).Key;
            return admobAdUnitkey;
        }
        else
        {
            return "ca-app-pub-3940256099942544/6300978111";
        }
    }


    public void ShowBannerBidmachine()
    {
        bannerView?.showBannerView(
        BidMachine.BANNER_VERTICAL_BOTTOM,
        BidMachine.BANNER_HORIZONTAL_CENTER,
        bannerView, bannerRequest.getSize());
    }

    public void DestroyBanner()
    {
        MaxSdk.DestroyBanner(BannerAdUnitId);
        admobBannerView.Destroy();
        // if (bannerView != null)
        // {
            bannerView.hideBannerView();
            bannerView.destroy();
            bannerView = null;
            bannerRequest = null;
        // }
        bannerList.Clear();
    }

    #endregion

    #region Interstitial Ad

    public void LoadInterstitialAd()
    {
        if (tgTesting.isOn)
        {
            RequestInterstitialBidmachine();
        }
        else
        {
            // Load the first interstitial
            LoadInterstitialApplovin();
        }
        
    }


    public void ShowInterstitialAd()
    {
        if (tgTesting.isOn)
        {
            ShowInterstitialBidmachine();
        }
        else
        {
            //sort the list by price
            interstitialList.Sort((a, b) => (b.Value.CompareTo(a.Value)));
        
            //check for the first item (the highest price)
                switch (interstitialList[0].Key)
                {
                case "applovin_max":
                    ShowInterstitialApplovin();
                    break;
                case "bidmachine":
                    ShowInterstitialBidmachine();
                    break;
                case "admob":
                    ShowAdmobInterstitial();
                    break;
                }
                       
        }
    }

    public void ShowInterstitialBidmachine()
    {
        if (interstitialAd.canShow())
        {
            interstitialAd.show();
        } 
    }

    public void DestroyInterstitial()
    {
        admobInterstitial.Destroy();
        if (interstitialAd != null)
        {
            interstitialAd.destroy();
            interstitialAd = null;
            interstitialRequest = null;
        }
    }

    public string CompareInterstitialPricesForAdmob()
    {
        if (interstitialList.Count > 0)
        {
            interstitialList.Sort((a, b) => (b.Value.CompareTo(a.Value)));
            var admobAdUnitkey = admobInterstitialList.FirstOrDefault(x => x.Value > interstitialList[0].Value).Key;
            return admobAdUnitkey;
        }
        else
        {
            return "ca-app-pub-3940256099942544/1033173712";
        }
    }

    #endregion

    #region Rewarded Video Ad

    public void LoadRewardedAd()
    {
        if (tgTesting.isOn)
        {
            RequestRewardedBidmachine();
        }
        else
        {
            // Load the first rewarded ad
            LoadRewardedApplovin();
        }
    }

    public void ShowRewardedAd()
    {
        if (tgTesting.isOn)
        {
            ShowRewardedBidmachine();
        }
        else
        {
            //sort the list by price
            rewardedList.Sort((a, b) => (b.Value.CompareTo(a.Value)));
        
                //check for the first item (the highest price)
                switch (rewardedList[0].Key)
                {
                case "applovin_max":
                    ShowRewardedApplovin();
                    break;
                case "bidmachine":
                    ShowRewardedBidmachine();
                    break;
                case "admob":
                    ShowAdmobRewarded();
                    break;
                }
              
        }
        
    }

    public void ShowRewardedBidmachine()
    {
       if (rewardedAd.canShow())
       {
            rewardedAd.show();
        } 
    }

    public void DestroyRewardedVideo()
    {
        if (rewardedAd == null) return;
        rewardedAd.destroy();
        rewardedAd = null;
        rewardedRequest = null;
    }

    public string CompareRewardedPricesForAdmob()
    {
        if (rewardedList.Count >0)
        {
            rewardedList.Sort((a, b) => (b.Value.CompareTo(a.Value)));
            var admobAdUnitkey = admobRewardedList.FirstOrDefault(x => x.Value > rewardedList[0].Value).Key;
            return admobAdUnitkey;
        }
        else
        {
            return "ca-app-pub-3940256099942544/5224354917";
        }
    }

    #endregion

    #region InterstitialAd Callbacks

    public void onInterstitialAdLoaded(InterstitialAd ad)
    {
        Debug.Log("BidMachineUnity: onInterstitialAdLoaded");
    }

    public void onInterstitialAdLoadFailed(InterstitialAd ad, BMError error)
    {
        Debug.Log("BidMachineUnity: onInterstitialAdLoadFailed");
    }

    public void onInterstitialAdShown(InterstitialAd ad)
    {
        Debug.Log("BidMachineUnity: onInterstitialAdShown");
    }

    public void onInterstitialAdImpression(InterstitialAd ad)
    {
        Debug.Log("BidMachineUnity: onInterstitialAdImpression");
    }

    public void onInterstitialAdExpired(InterstitialAd ad)
    {
        Debug.Log("BidMachineUnity: onInterstitialAdExpired");
    }

    public void onInterstitialAdShowFailed(InterstitialAd ad, BMError error)
    {
        Debug.Log("BidMachineUnity: onInterstitialAdShowFailed");
    }

    public void onInterstitialAdClosed(InterstitialAd ad, bool finished)
    {
        Debug.Log($"BidMachineUnity: onInterstitialAdClosed - finished: {finished}");
        //after the shown we should clear our list and make a new request
        interstitialList.Clear();
        DestroyInterstitial(); 
    }

    public void onInterstitialAdClicked(InterstitialAd ad)
    {
        Debug.Log("BidMachineUnity: onInterstitialAdClicked");
    }

    #endregion

    #region RewardedAd Callbacks

    public void onRewardedAdLoaded(RewardedAd ad)
    {
        Debug.Log("BidMachineUnity: onRewardedAdLoaded");
    }

    public void onRewardedAdLoadFailed(RewardedAd ad, BMError error)
    {
        Debug.Log("BidMachineUnity: onRewardedAdLoadFailed");
    }

    public void onRewardedAdShown(RewardedAd ad)
    {
        Debug.Log("BidMachineUnity: onRewardedAdShown");
    }

    public void onRewardedAdImpression(RewardedAd ad)
    {
        Debug.Log("BidMachineUnity: onRewardedAdImpression");
    }

    public void onRewardedAdClicked(RewardedAd ad)
    {
        Debug.Log("BidMachineUnity: onRewardedAdClicked");
    }

    public void onRewardedAdExpired(RewardedAd ad)
    {
        Debug.Log("BidMachineUnity: onRewardedAdExpired");
    }

    public void onRewardedAdShowFailed(RewardedAd ad, BMError error)
    {
        Debug.Log("BidMachineUnity: onRewardedAdShowFailed");
    }

    public void onRewardedAdClosed(RewardedAd ad, bool finished)
    {
        Debug.Log("BidMachineUnity: onRewardedAdClosed - finished: " + finished);
        //after the shown we should clear our list and make a new request
        rewardedList.Clear();
        DestroyRewardedVideo(); 
    }

    public void onRewardedAdRewarded(RewardedAd ad)
    {
        Debug.Log("BidMachineUnity: onRewardedAdRewarded");
    }

    #endregion

    #region BannerView Callbacks

    public void onBannerAdLoaded(BannerView ad)
    {
        Debug.Log("BidMachineUnity: onBannerAdLoaded");
    }

    public void onBannerAdLoadFailed(BannerView ad, BMError error)
    {
        Debug.Log("BidMachineUnity: onBannerAdLoadFailed");
    }

    public void onBannerAdShown(BannerView ad)
    {
        Debug.Log("BidMachineUnity: onBannerAdShown");
    }

    public void onBannerAdImpression(BannerView ad)
    {
        Debug.Log("BidMachineUnity: onBannerAdImpression");
    }

    public void onBannerAdClicked(BannerView ad)
    {
        Debug.Log("BidMachineUnity: onBannerAdClicked");
    }

    public void onBannerAdExpired(BannerView ad)
    {
        Debug.Log("BidMachineUnity: onBannerAdExpired");
    }

    #endregion

      //due to the fact that there is no method in plugin to get the bidmachine price we should fetch the price from the string and convert it to double
    public double FetchBidmachineAuctionPrice(string auctionResult)
    {
         //fetch the price from the auction result
        var priceAuction = auctionResult.Split(',')[auctionResult.Split(',').Length - 1];
        var priceAd = priceAuction.Split(':')[priceAuction.Split(':').Length - 1];
        var newPrice = priceAd.Trim('}');

        // convert to double using 'NumberStyles.Number,CultureInfo.InvariantCulture' due to different localizations
        double bmPrice = double.TryParse(newPrice, NumberStyles.Number,CultureInfo.InvariantCulture, out bmPrice) ? bmPrice : 0.01;
        return bmPrice;
    }

    #region BannerRequest Callbacks

    public void onBannerRequestSuccess(BannerRequest request, string auctionResult)
    {
        Debug.Log("BidMachineUnity: onBannerRequestSuccess");
        
        if (request != null)
        {
            Debug.Log($"onBannerRequestSuccess - request.getSize() - {request.getSize()}");
            Debug.Log($"onBannerRequestSuccess - request.getAuctionResult() - {request.getAuctionResult()}");
            Debug.Log($"onBannerRequestSuccess - request.isExpired() - {request.isExpired()}");
            Debug.Log($"onBannerRequestSuccess - request.isDestroyed() - {request.isDestroyed()}");
        }
        //add the bidmachine price to the list for comparing
        bannerList.Add(new KeyValuePair<string, double>("bidmachine", FetchBidmachineAuctionPrice(auctionResult)));

        RequestAdmobBannerAd(CompareBannerPricesForAdmob());

        if (!string.IsNullOrEmpty(auctionResult))
        {
            Debug.Log($"BannerRequestListener - onBannerRequestSuccess" +
                      $"auctionResult - {auctionResult}");
        }
    }

    public void onBannerRequestFailed(BannerRequest request, BMError error)
    {
        RequestAdmobBannerAd(CompareBannerPricesForAdmob());
        Debug.Log("BidMachineUnity: onBannerRequestFailed");
        Debug.Log("BannerRequestListener - onBannerRequestFailed" +
                  $"BMError - {error.code} - {error.message}");
    }

    public void onBannerRequestExpired(BannerRequest request)
    {
        Debug.Log("BidMachineUnity: onBannerRequestExpired");
        Debug.Log("BannerRequestListener - onBannerRequestExpired");
    }

    #endregion
    

    #region InterstitialRequest Callbacks

    public void onInterstitialRequestSuccess(InterstitialRequest request, string auctionResult)
    {
        Debug.Log("BidMachineUnity: onInterstitialRequestSuccess");

        if (request != null)
        {
            Debug.Log($"onInterstitialRequestSuccess - request.getAuctionResult() - {request.getAuctionResult()}");
            Debug.Log($"onInterstitialRequestSuccess - request.isExpired() - {request.isExpired()}");
            Debug.Log($"onInterstitialRequestSuccess - request.isDestroyed() - {request.isDestroyed()}");
        }
        //add the bidmachine price to the list for comparing
        interstitialList.Add(new KeyValuePair<string, double>("bidmachine", FetchBidmachineAuctionPrice(auctionResult)));

        RequestAdmobInterstitialAd(CompareInterstitialPricesForAdmob());

        if (!string.IsNullOrEmpty(auctionResult))
        {
            Debug.Log($"InterstitialRequestListener - onInterstitialRequestSuccess" +
                      $"auctionResult - {auctionResult}");
        }
        else
        {
            Debug.Log("auctionResult - IsNullOrEmpty");
        }
    }

    public void onInterstitialRequestFailed(InterstitialRequest request, BMError error)
    {
        RequestAdmobInterstitialAd(CompareInterstitialPricesForAdmob());
        Debug.Log("BidMachineUnity: onInterstitialRequestFailed");
        Debug.Log($"InterstitialRequestListener - onInterstitialRequestFailed" +
                  $"BMError - {error.code} - {error.message}");
    }

    public void onInterstitialRequestExpired(InterstitialRequest request)
    {
        Debug.Log("BidMachineUnity: onInterstitialRequestExpired");
        Debug.Log($"InterstitialRequestListener - onInterstitialRequestExpired");
    }

    #endregion

    #region RewardedRequest Callbacks

    public void onRewardedRequestSuccess(RewardedRequest request, string auctionResult)
    {
        Debug.Log("BidMachineUnity: onRewardedRequestSuccess");

        if (request != null)
        {
            Debug.Log($"onRewardedRequestSuccess - request.getAuctionResult() - {request.getAuctionResult()}");
            Debug.Log($"onRewardedRequestSuccess - request.isExpired() - {request.isExpired()}");
            Debug.Log($"onRewardedRequestSuccess - request.isDestroyed() - {request.isDestroyed()}");
        }
        
        //add the bidmachine price to the list for comparing
        rewardedList.Add(new KeyValuePair<string, double>("bidmachine", FetchBidmachineAuctionPrice(auctionResult)));

        RequestAdmobRewardedAd(CompareRewardedPricesForAdmob());

        if (!string.IsNullOrEmpty(auctionResult))
        {
            Debug.Log($"RewardedRequestListener - onRewardedRequestSuccess" +
                      $"auctionResult - {auctionResult}");
        }
        else
        {
            Debug.Log("auctionResult - IsNullOrEmpty");
        }
    }

    public void onRewardedRequestFailed(RewardedRequest request, BMError error)
    {
        RequestAdmobRewardedAd(CompareRewardedPricesForAdmob());
        Debug.Log("BidMachineUnity: onRewardedRequestFailed");
        Debug.Log($"RewardedRequestListener - onRewardedRequestFailed" +
                  $"BMError - {error.code} - {error.message}");
    }

    public void onRewardedRequestExpired(RewardedRequest request)
    {
        Debug.Log("BidMachineUnity: onRewardedRequestExpired");
        Debug.Log($"RewardedRequestListener - onRewardedRequestExpired");
    }

    #endregion

}