/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/ADJavaScriptObject.h>

@class NSArray, WebScriptObject, NSNumber, NSString, SSItem, NSDate;

@interface ADStoreItemJSO : ADJavaScriptObject {
@private
	WebScriptObject *_jsListener;	// 4 = 0x4
	NSNumber *_adamId;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	NSArray *_offers;	// 16 = 0x10
	NSDate *_expirationDate;	// 20 = 0x14
	NSArray *_previews;	// 24 = 0x18
	int _error;	// 28 = 0x1c
	SSItem *_storeItem;	// 32 = 0x20
	BOOL _privilegedClient;	// 36 = 0x24
}
@property(assign, nonatomic, getter=isPrivilegedClient) BOOL privilegedClient;	// G=0x402c1; S=0x402d1; @synthesize=_privilegedClient
@property(retain, nonatomic) SSItem *storeItem;	// G=0x402b1; S=0x3fdbd; @synthesize=_storeItem
@property(assign, nonatomic) int error;	// G=0x40291; S=0x402a1; @synthesize=_error
@property(readonly, assign) NSArray *previews;	// G=0x4027d; @synthesize=_previews
@property(retain, nonatomic) NSDate *expirationDate;	// G=0x40249; S=0x40259; @synthesize=_expirationDate
@property(readonly, assign) NSArray *offers;	// G=0x40235; @synthesize=_offers
@property(readonly, assign) NSString *title;	// G=0x40221; @synthesize=_title
@property(readonly, assign, nonatomic) NSNumber *adamId;	// G=0x40211; @synthesize=_adamId
@property(retain, nonatomic) WebScriptObject *jsListener;	// G=0x401dd; S=0x401ed; @synthesize=_jsListener
+ (id)scriptingKeys;	// 0x3fce9
// declared property setter: - (void)setPrivilegedClient:(BOOL)client;	// 0x402d1
// declared property getter: - (BOOL)isPrivilegedClient;	// 0x402c1
// declared property getter: - (id)storeItem;	// 0x402b1
// declared property setter: - (void)setError:(int)error;	// 0x402a1
// declared property getter: - (int)error;	// 0x40291
// declared property getter: - (id)previews;	// 0x4027d
// declared property setter: - (void)setExpirationDate:(id)date;	// 0x40259
// declared property getter: - (id)expirationDate;	// 0x40249
// declared property getter: - (id)offers;	// 0x40235
// declared property getter: - (id)title;	// 0x40221
// declared property getter: - (id)adamId;	// 0x40211
// declared property setter: - (void)setJsListener:(id)listener;	// 0x401ed
// declared property getter: - (id)jsListener;	// 0x401dd
- (void)setPreviews:(id)previews;	// 0x401d9
- (void)setOffers:(id)offers;	// 0x401d5
- (void)setTitle:(id)title;	// 0x401d1
- (void)setAdamId:(id)anId;	// 0x401cd
// declared property setter: - (void)setStoreItem:(id)item;	// 0x3fdbd
- (id)initWithAdamId:(id)adamId;	// 0x3fd69
- (void)dealloc;	// 0x3fc25
@end