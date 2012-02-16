/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class ASResolveRecipientsCertificatesItem, NSString;

@interface ASResolveRecipientsSingleRecipientItem : ASItem {
	NSString *_emailAddress;	// 40 = 0x28
	ASResolveRecipientsCertificatesItem *_certificates;	// 44 = 0x2c
}
@property(retain) ASResolveRecipientsCertificatesItem *certificates;	// G=0x6695d; S=0x66971; @synthesize=_certificates
@property(retain) NSString *emailAddress;	// G=0x66925; S=0x66939; @synthesize=_emailAddress
+ (BOOL)notifyOfUnknownTokens;	// 0x665b1
+ (BOOL)frontingBasicTypes;	// 0x6655d
+ (BOOL)parsingWithSubItems;	// 0x66509
+ (BOOL)parsingLeafNode;	// 0x664b5
+ (BOOL)acceptsTopLevelLeaves;	// 0x66461
// declared property setter: - (void)setCertificates:(id)certificates;	// 0x66971
// declared property getter: - (id)certificates;	// 0x6695d
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x66939
// declared property getter: - (id)emailAddress;	// 0x66925
- (id)description;	// 0x668ad
- (id)asParseRules;	// 0x66605
@end