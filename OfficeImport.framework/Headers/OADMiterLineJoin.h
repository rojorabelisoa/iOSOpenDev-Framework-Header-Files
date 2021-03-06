/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADLineJoin.h>


__attribute__((visibility("hidden")))
@interface OADMiterLineJoin : OADLineJoin {
@private
	float mLimit;	// 12 = 0xc
	unsigned mIsLimitOverridden : 1;	// 16 = 0x10
}
@property(assign) float limit;	// G=0x2a64c1; S=0x14f0a5; converted property
+ (id)defaultProperties;	// 0x14f011
- (id)copyWithZone:(NSZone *)zone;	// 0x2a644d
- (id)initWithDefaults;	// 0x14f059
// converted property getter: - (float)limit;	// 0x2a64c1
// converted property setter: - (void)setLimit:(float)limit;	// 0x14f0a5
- (BOOL)isLimitOverridden;	// 0x2a64f1
@end
