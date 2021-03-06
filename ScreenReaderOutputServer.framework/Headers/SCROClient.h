/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutputServer/XXUnknownSuperclass.h>

@class NSLock;

@interface SCROClient : XXUnknownSuperclass {
	NSLock *_lock;	// 4 = 0x4
	unsigned _identifier;	// 8 = 0x8
	unsigned _port;	// 12 = 0xc
	CFArrayRef _queue;	// 16 = 0x10
	CFSetRef _callbackSet;	// 20 = 0x14
}
+ (void)initialize;	// 0x1b679
+ (id)addClientGetIdentifier:(unsigned *)identifier getPort:(unsigned *)port;	// 0x1b5ad
+ (long)removeClientWithPort:(unsigned)port;	// 0x1b3c5
+ (void)sendCallback:(id)callback;	// 0x1b05d
+ (id)callbacksForClientIdentifier:(unsigned)clientIdentifier;	// 0x1ae79
+ (void)registerCallbackWithKey:(int)key forClientIdentifier:(unsigned)clientIdentifier;	// 0x1acc9
- (id)init;	// 0x1ac19
- (void)dealloc;	// 0x1b841
- (void)_lock;	// 0x1abb1
- (void)_unlock;	// 0x1abd1
- (void)_invalidate;	// 0x1b805
- (void)_registerCallbackWithKey:(int)key;	// 0x1b7c5
- (id)_dequeueCallbacks;	// 0x1abf1
- (BOOL)_wantsCallback:(id)callback;	// 0x1b769
- (void)_sendCallback:(id)callback;	// 0x1b709
@end
