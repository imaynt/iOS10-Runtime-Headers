/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAirplayActivity : UIActivity <MPAVRoutingControllerDelegate, UIPopoverControllerDelegate> {
    MPAVRoutingSheet * _airPlayActionSheet;
    MPAudioVideoRoutingPopoverController * _airPlayPopoverController;
    UIBarButtonItem * _barButtonItem;
    UIViewController * _parentViewController;
    MPAVRoutingController * _routingController;
}

@property (nonatomic, retain) MPAVRoutingSheet *airPlayActionSheet;
@property (nonatomic, retain) MPAudioVideoRoutingPopoverController *airPlayPopoverController;
@property (nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) MPAVRoutingController *routingController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)airPlayActionSheet;
- (id)airPlayPopoverController;
- (id)barButtonItem;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)parentViewController;
- (void)performActivity;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)routingController;
- (void)setAirPlayActionSheet:(id)arg1;
- (void)setAirPlayPopoverController:(id)arg1;
- (void)setBarButtonItem:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setRoutingController:(id)arg1;
- (void)showAirPlayPickerIPad;
- (void)showAirPlayPickerIPhone;

@end
