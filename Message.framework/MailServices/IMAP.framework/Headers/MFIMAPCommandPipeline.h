/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/XXUnknownSuperclass.h>

@class NSMutableArray;

@interface MFIMAPCommandPipeline : XXUnknownSuperclass {
	unsigned _chunkSize;	// 4 = 0x4
	unsigned _expectedSize;	// 8 = 0x8
	unsigned _full : 1;	// 12 = 0xc
	unsigned _sending : 1;	// 12 = 0xc
	NSMutableArray *_fetchUnits;	// 16 = 0x10
}
@property(assign) unsigned long chunkSize;	// G=0x153d; S=0x152d; converted property
@property(assign, getter=isFull) BOOL full;	// G=0x1575; S=0x154d; converted property
- (void)dealloc;	// 0x1e75
- (void)addFetchCommandForUid:(unsigned long)uid fetchItem:(id)item expectedLength:(unsigned long)length;	// 0x159d
- (unsigned long)expectedSize;	// 0x151d
// converted property setter: - (void)setChunkSize:(unsigned long)size;	// 0x152d
// converted property getter: - (unsigned long)chunkSize;	// 0x153d
// converted property setter: - (void)setFull:(BOOL)full;	// 0x154d
// converted property getter: - (BOOL)isFull;	// 0x1575
- (void)_removeFetchUnitMatchingResponse:(id)response;	// 0x1dbd
- (id)failureResponsesFromSendingCommandsWithConnection:(id)connection;	// 0x1ec1
- (BOOL)isSending;	// 0x1589
@end
