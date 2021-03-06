/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class UIImage, NSString, SSMutableURLRequestProperties, SSURLRequestProperties;

@interface SUPageSection : XXUnknownSuperclass {
	double _expirationTime;	// 4 = 0x4
	NSString *_identifier;	// 12 = 0xc
	UIImage *_image;	// 16 = 0x10
	int _structuredPageType;	// 20 = 0x14
	NSString *_title;	// 24 = 0x18
	SSMutableURLRequestProperties *_urlRequestProperties;	// 28 = 0x1c
	id _userInfo;	// 32 = 0x20
}
@property(retain, nonatomic) id userInfo;	// G=0x190ad; S=0x190bd; @synthesize=_userInfo
@property(copy, nonatomic) SSURLRequestProperties *URLRequestProperties;	// G=0x1909d; S=0x18ea9; @synthesize=_urlRequestProperties
@property(retain, nonatomic) NSString *title;	// G=0x19069; S=0x19079; @synthesize=_title
@property(assign, nonatomic) int structuredPageType;	// G=0x19049; S=0x19059; @synthesize=_structuredPageType
@property(retain, nonatomic) UIImage *image;	// G=0x19015; S=0x19025; @synthesize=_image
@property(retain, nonatomic) NSString *identifier;	// G=0x18fe1; S=0x18ff1; @synthesize=_identifier
@property(assign, nonatomic) double expirationTime;	// G=0x18fb5; S=0x18fcd; @synthesize=_expirationTime
@property(readonly, assign, nonatomic) id segmentedControlItem;	// G=0x18e85; 
// declared property setter: - (void)setUserInfo:(id)info;	// 0x190bd
// declared property getter: - (id)userInfo;	// 0x190ad
// declared property getter: - (id)URLRequestProperties;	// 0x1909d
// declared property setter: - (void)setTitle:(id)title;	// 0x19079
// declared property getter: - (id)title;	// 0x19069
// declared property setter: - (void)setStructuredPageType:(int)type;	// 0x19059
// declared property getter: - (int)structuredPageType;	// 0x19049
// declared property setter: - (void)setImage:(id)image;	// 0x19025
// declared property getter: - (id)image;	// 0x19015
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x18ff1
// declared property getter: - (id)identifier;	// 0x18fe1
// declared property setter: - (void)setExpirationTime:(double)time;	// 0x18fcd
// declared property getter: - (double)expirationTime;	// 0x18fb5
- (void)_setURLBagKey:(id)key;	// 0x18f51
- (void)_setURL:(id)url;	// 0x18eed
// declared property setter: - (void)setURLRequestProperties:(id)properties;	// 0x18ea9
// declared property getter: - (id)segmentedControlItem;	// 0x18e85
- (BOOL)loadFromDictionary:(id)dictionary;	// 0x18c2d
- (BOOL)isEqual:(id)equal;	// 0x18b21
- (void)dealloc;	// 0x18a85
- (id)init;	// 0x18a39
@end
