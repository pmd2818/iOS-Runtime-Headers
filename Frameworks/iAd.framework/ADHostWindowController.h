/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADRemoteView, ADBannerView, UIWindow;



@interface ADHostWindowController : NSObject <UIWindowDelegate>
{
    ADBannerView *_bannerView;
    BOOL _isStatusBarHidden;
    UIWindow *_window;
    ADRemoteView *_hostView;
}

@property(readonly) CGRect bannerViewInScreenCoordinates;
@property(readonly) NSInteger bannerViewOrientation;
@property(retain) ADRemoteView *hostView;
@property(retain) UIWindow *window;
@property BOOL isStatusBarHidden;
@property(retain) ADBannerView *bannerView;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bannerViewInScreenCoordinates;
- (NSInteger)bannerViewOrientation;
- (void)setHostView:(id)arg1;
- (void)setIsStatusBarHidden:(BOOL)arg1;
- (id)bannerView;
- (void)endTransitionOut;
- (void)beginTransitionOut;
- (void)setBannerView:(id)arg1;
- (void)beginTransitionIn;
- (void)endTransitionIn;
- (void)setRemoteWindowContextId:(NSUInteger)arg1;
- (id)hostView;
- (void)setWindow:(id)arg1;
- (id)init;
- (BOOL)isStatusBarHidden;
- (id)window;
- (void)dealloc;

@end