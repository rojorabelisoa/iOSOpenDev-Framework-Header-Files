/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <ScreenReaderOutput/XXUnknownSuperclass.h>


@interface XXUnknownSuperclass (SCROAttributedStringExtras)
- (BOOL)getRange:(NSRange *)range ofAttribute:(id)attribute;	// 0xa75d
- (BOOL)getRange:(NSRange *)range ofAttribute:(id)attribute withValue:(id)value;	// 0xa7e1
- (id)deepCopyWithZone:(NSZone *)zone;	// 0xa87d
@end

@interface XXUnknownSuperclass (SCROBundleExtras)
- (int)_brailleTableCompare:(id)compare;	// 0x2815
@end

@interface XXUnknownSuperclass (SCROBundleExtras)
+ (id)brailleDriverBundles;	// 0x31ed
+ (id)brailleDriverBundleWithIdentifier:(id)identifier;	// 0x31a9
+ (long)bundleIndexForBrailleDriverIdentifier:(id)brailleDriverIdentifier;	// 0xaa05
+ (id)brailleDriverDeviceDetectionInfo;	// 0x3bb1
+ (id)_brailleTableBundles;	// 0x2265
+ (id)brailleTableIdentifiers;	// 0x25e5
+ (id)brailleTableBundleWithTableIdentifier:(id)tableIdentifier;	// 0x2185
+ (id)nameForBrailleTableIdentifier:(id)brailleTableIdentifier;	// 0x2865
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)brailleTableIdentifier;	// 0x208d
+ (BOOL)doesBrailleTableSupportContractions:(id)contractions;	// 0x2009
+ (BOOL)doesBrailleTableSupportEightDot:(id)dot;	// 0x2561
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)brailleTableIdentifier;	// 0x29e9
+ (id)tableIdentifiersForLanguageIdentifier:(id)languageIdentifier;	// 0xab01
- (id)bundleSpecificTableIdentifierForTableIdentifier:(id)tableIdentifier;	// 0xa989
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)bundleSpecificTableIdentifier;	// 0xa9d1
@end