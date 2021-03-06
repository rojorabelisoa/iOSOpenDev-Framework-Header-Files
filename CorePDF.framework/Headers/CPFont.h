/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CorePDF-Structs.h>

#import <CorePDF/CPDisposable.h>

@class NSString;

@interface CPFont : NSObject <CPDisposable> {
	CGPDFFontRef cgPDFFont;	// 4 = 0x4
	CGFontRef cgFont;	// 8 = 0x8
	NSString *fontName;	// 12 = 0xc
	BOOL exactMatch;	// 16 = 0x10
	XXStruct_FvSZlC descriptor;	// 20 = 0x14
	CFDictionaryRef kernDictionary;	// 104 = 0x68
	double kernUnitsPerEm;	// 108 = 0x6c
	BOOL disposed;	// 116 = 0x74
}
@property(readonly, assign) CGPDFFontRef cgPDFFont;	// G=0x246e5; converted property
@property(readonly, assign) CGFontRef cgFont;	// G=0x255bd; converted property
@property(readonly, retain) NSString *fontName;	// G=0x246f5; converted property
- (id)matchingFontName;	// 0x248ad
- (void)getFontName;	// 0x24bc5
- (void)loadExternalFontInfoFor:(id)aFor;	// 0x24ce5
- (void)loadEmbeddedFontInfo;	// 0x24e2d
- (id)initWith:(CGPDFDictionaryRef)with;	// 0x2569d
- (void)dispose;	// 0x2564d
- (void)finalize;	// 0x25339
- (void)dealloc;	// 0x255f1
// converted property getter: - (CGPDFFontRef)cgPDFFont;	// 0x246e5
// converted property getter: - (CGFontRef)cgFont;	// 0x255bd
// converted property getter: - (id)fontName;	// 0x246f5
- (BOOL)isSameFontAs:(id)as;	// 0x24875
- (float)fontStretch;	// 0x24705
- (float)fontWeight;	// 0x24715
- (unsigned)flags;	// 0x24729
- (CGRect)fontBBox;	// 0x2473d
- (float)italicAngle;	// 0x2475d
- (float)ascent;	// 0x24771
- (float)descent;	// 0x24785
- (float)leading;	// 0x24799
- (float)capHeight;	// 0x247ad
- (float)xHeight;	// 0x247c1
- (float)stemV;	// 0x247d5
- (float)stemH;	// 0x247e9
- (float)avgWidth;	// 0x247fd
- (float)maxWidth;	// 0x24811
- (float)missingWidth;	// 0x24825
- (float)spaceWidth;	// 0x24839
- (float)underlinePosition;	// 0x2484d
- (float)underlineThickness;	// 0x24861
- (double)kernBetweenUnicode:(unsigned short)unicode andUnicode:(unsigned short)unicode2;	// 0x25529
- (BOOL)getGlyphs:(unsigned short *)glyphs forCodes:(const unsigned short *)codes count:(unsigned)count;	// 0x25409
- (void)uniCharsFor:(unsigned long)aFor count:(unsigned *)count toArray:(unsigned short *)array maxChars:(unsigned)chars;	// 0x25379
@end
