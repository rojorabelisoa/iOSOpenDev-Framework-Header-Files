/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/XXUnknownSuperclass.h>
#import <iWorkImport/iWorkImport-Structs.h>

@class GQDDrawable;

__attribute__((visibility("hidden")))
@interface GQDWrapPoint : XXUnknownSuperclass {
@private
	CGPoint mPoint;	// 4 = 0x4
	float mDistance;	// 12 = 0xc
	GQDDrawable *mDrawable;	// 16 = 0x10
	int mFlowType;	// 20 = 0x14
	int mZIndex;	// 24 = 0x18
}
- (id)initWithX:(float)x y:(float)y flowType:(int)type drawable:(id)drawable;	// 0x95f9
- (int)comparePoint:(id)point;	// 0x8e49
- (int)zIndex;	// 0x8ed1
@end
