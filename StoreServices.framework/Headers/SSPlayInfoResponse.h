/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSCoding.h>
#import <StoreServices/NSCopying.h>
#import <StoreServices/XXUnknownSuperclass.h>

@class NSData, NSError;

@interface SSPlayInfoResponse : XXUnknownSuperclass <SSCoding, NSCopying> {
@private
	NSError *_error;	// 4 = 0x4
	NSData *_playInfoData;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSData *playInfoData;	// G=0x2faf5; @synthesize=_playInfoData
@property(readonly, assign, nonatomic) NSError *error;	// G=0x2fae5; @synthesize=_error
// declared property getter: - (id)playInfoData;	// 0x2faf5
// declared property getter: - (id)error;	// 0x2fae5
- (id)initWithPlayInfoData:(id)playInfoData error:(id)error;	// 0x2fa6d
- (id)description;	// 0x2f98d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x2f951
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x2f881
- (void *)copyXPCEncoding;	// 0x2f84d
- (id)copyPropertyListEncoding;	// 0x2f7a5
- (id)copyWithZone:(NSZone *)zone;	// 0x2f721
- (void)dealloc;	// 0x2f6c1
@end