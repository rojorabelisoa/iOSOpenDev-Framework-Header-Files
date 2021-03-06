/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableSet, OCPPackagePart, NSMutableDictionary, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface OAVState : XXUnknownSuperclass {
@private
	Class mClient;	// 4 = 0x4
	OAXDrawingState *mOAXState;	// 8 = 0x8
	OCPPackagePart *mPackagePart;	// 12 = 0xc
	NSMutableDictionary *mShapeTypes;	// 16 = 0x10
	NSMutableDictionary *mShapeIdMap;	// 20 = 0x14
	NSMutableSet *mDualDrawables;	// 24 = 0x18
}
@property(retain) id packagePart;	// G=0x1972d9; S=0x18f841; converted property
- (id)initWithClient:(Class)client packagePart:(id)part;	// 0x1869c1
- (void)dealloc;	// 0x1a0379
- (void)reset;	// 0x1a5d75
- (Class)client;	// 0x19d425
- (id)oaxState;	// 0x2ac3d9
- (void)setOAXState:(id)state;	// 0x186b1d
// converted property getter: - (id)packagePart;	// 0x1972d9
// converted property setter: - (void)setPackagePart:(id)part;	// 0x18f841
- (unsigned short)shapeTypeForId:(id)anId;	// 0x19f8ed
- (void)setShapeType:(unsigned short)type forId:(id)anId;	// 0x19f899
- (id)drawableForVmlShapeId:(id)vmlShapeId;	// 0x1c720d
- (void)setDrawable:(id)drawable forVmlShapeId:(id)vmlShapeId;	// 0x19b2a1
- (void)addDualDrawable:(id)drawable;	// 0x1c72bd
- (BOOL)isDualDrawable:(id)drawable;	// 0x1c7425
- (unsigned long)officeArtShapeIdWithVmlShapeId:(id)vmlShapeId;	// 0x19b381
- (id)blipRefForURL:(id)url;	// 0x2ac3e9
@end
