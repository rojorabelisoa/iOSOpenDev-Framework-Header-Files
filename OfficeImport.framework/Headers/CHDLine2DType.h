/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDLineType.h>


__attribute__((visibility("hidden")))
@interface CHDLine2DType : CHDLineType {
@private
	bool mShowMarker;	// 28 = 0x1c
	bool mStockType;	// 29 = 0x1d
}
@property(assign) bool showMarker;	// G=0x265cad; S=0x1e2639; converted property
@property(assign, getter=isStockType) bool stockType;	// G=0x265cbd; S=0x265ccd; converted property
- (id)initWithChart:(id)chart;	// 0x1d3fd9
// converted property getter: - (bool)showMarker;	// 0x265cad
// converted property setter: - (void)setShowMarker:(bool)marker;	// 0x1e2639
// converted property getter: - (bool)isStockType;	// 0x265cbd
// converted property setter: - (void)setStockType:(bool)type;	// 0x265ccd
@end
