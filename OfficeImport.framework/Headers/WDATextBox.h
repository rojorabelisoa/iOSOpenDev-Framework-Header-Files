/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class WDAContent, WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDATextBox : XXUnknownSuperclass {
@private
	WDText *mText;	// 4 = 0x4
	unsigned mNextTextBoxId;	// 8 = 0x8
	bool mOle;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDAContent *mParent;	// 20 = 0x14
}
@property(retain) id document;	// G=0x141e31; S=0x1394c5; converted property
@property(assign, getter=isOle) BOOL ole;	// G=0x142121; S=0x139489; converted property
@property(retain) id parent;	// G=0x141df1; S=0x1394a5; converted property
@property(retain) id text;	// G=0x141e21; S=0x141e41; converted property
@property(assign) unsigned long nextTextBoxId;	// G=0x145329; S=0x139519; converted property
- (id)init;	// 0x13941d
- (void)dealloc;	// 0x148169
// converted property getter: - (id)document;	// 0x141e31
// converted property setter: - (void)setDocument:(id)document;	// 0x1394c5
// converted property getter: - (BOOL)isOle;	// 0x142121
// converted property setter: - (void)setOle:(BOOL)ole;	// 0x139489
// converted property getter: - (id)parent;	// 0x141df1
// converted property setter: - (void)setParent:(id)parent;	// 0x1394a5
// converted property getter: - (id)text;	// 0x141e21
// converted property setter: - (void)setText:(id)text;	// 0x141e41
// converted property getter: - (unsigned long)nextTextBoxId;	// 0x145329
// converted property setter: - (void)setNextTextBoxId:(unsigned long)anId;	// 0x139519
@end