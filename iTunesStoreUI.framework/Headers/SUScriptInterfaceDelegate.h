/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>



@protocol SUScriptInterfaceDelegate <NSObject>
- (void)scriptInterface:(id)interface receivedEventOfType:(int)type userInfo:(id)info;
- (void)scriptInterface:(id)interface parsedPropertyList:(id)list ofType:(int)type;
- (void)scriptInterface:(id)interface animatePurchaseForIdentifier:(id)identifier;
- (id)parentViewControllerForScriptInterface:(id)scriptInterface;
- (OpaqueJSContext *)javaScriptContextForScriptInterface:(id)scriptInterface;
@end
