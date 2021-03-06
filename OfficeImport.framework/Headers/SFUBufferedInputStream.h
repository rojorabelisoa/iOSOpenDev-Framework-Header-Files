/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/SFUBufferedInputStream.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/SFUInputStream.h>


@protocol SFUBufferedInputStream <SFUInputStream>
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;
- (BOOL)seekWithinBufferToOffset:(long long)offset;
@end

__attribute__((visibility("hidden")))
@interface SFUBufferedInputStream : XXUnknownSuperclass <SFUBufferedInputStream> {
@private
	id<SFUInputStream> mStream;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	unsigned mBufferSize;	// 12 = 0xc
	unsigned mBufferOffset;	// 16 = 0x10
	long long mBufferStart;	// 20 = 0x14
	long long mBufferEnd;	// 28 = 0x1c
}
- (id)initWithSFUStream:(id)sfustream;	// 0x2dac85
- (id)initWithStream:(id)stream;	// 0x2dac99
- (id)initWithStream:(id)stream bufferSize:(unsigned long)size;	// 0x182501
- (id)initWithStream:(id)stream dataLength:(long long)length;	// 0x1824bd
- (void)dealloc;	// 0x183659
- (long long)offset;	// 0x2dabd1
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x2daced
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x182b1d
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x2dabf9
- (BOOL)canSeek;	// 0x182af5
- (void)seekToOffset:(long long)offset;	// 0x182a09
- (void)disableSystemCaching;	// 0x2dacad
- (void)enableSystemCaching;	// 0x2daccd
- (void)close;	// 0x184695
- (id)closeLocalStream;	// 0x2dac75
@end
