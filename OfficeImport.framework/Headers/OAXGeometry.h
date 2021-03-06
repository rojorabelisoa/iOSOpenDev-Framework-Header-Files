/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXGeometry.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface OAXGeometry : XXUnknownSuperclass {
}
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x2a9dc9
+ (id)readCustomGeometryFromXmlNode:(xmlNode *)xmlNode hasImplicitFormulas:(BOOL)formulas;	// 0x1b9c89
+ (int)shapeTypeForString:(id)string;	// 0x195b21
+ (id)stringForShapeType:(int)shapeType;	// 0x1d0dd5
@end

@interface OAXGeometry (Private)
+ (int)adjustValueWithGuideXmlNode:(xmlNode *)guideXmlNode;	// 0x1cbfdd
+ (id)readPresetGeometryFromXmlNode:(xmlNode *)xmlNode;	// 0x195a01
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap;	// 0x1b9dfd
+ (void)readFormulasFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap formulaNameToIndexMap:(id)indexMap4;	// 0x1ba05d
+ (void)addFormulasFromFile:(id)file toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x1b9ee9
+ (OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode *)xmlNode name:(const char *)name formulaNameToIndexMap:(id)indexMap;	// 0x1ba811
+ (void)readTextRectFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x1ba6d5
+ (void)readPathsFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x1ba875
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x195991
+ (id)shapeTypeEnumMap;	// 0x195b4d
+ (id)formulaTypeEnumMap;	// 0x1ba5e1
+ (id)formulaKeywordEnumMap;	// 0x1ba639
+ (id)pathFillModeEnumMap;	// 0x1f0ed9
@end
