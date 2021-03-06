/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGlowEffect : OADEffect {
@private
	OADColor *mColor;	// 8 = 0x8
	float mRadius;	// 12 = 0xc
}
@property(retain) id color;	// G=0x2ae9e1; S=0x1d17e1; converted property
@property(assign) float radius;	// G=0x2ae9f1; S=0x1d17d1; converted property
- (id)init;	// 0x1d1711
- (id)copyWithZone:(NSZone *)zone;	// 0x1eeb1d
- (void)dealloc;	// 0x1d1831
// converted property getter: - (id)color;	// 0x2ae9e1
// converted property setter: - (void)setColor:(id)color;	// 0x1d17e1
// converted property getter: - (float)radius;	// 0x2ae9f1
// converted property setter: - (void)setRadius:(float)radius;	// 0x1d17d1
- (unsigned)hash;	// 0x2aeaf5
- (BOOL)isEqual:(id)equal;	// 0x2aea01
@end
