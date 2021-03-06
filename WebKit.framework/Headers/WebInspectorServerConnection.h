/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebKit/XXUnknownSuperclass.h>

@class WebInspectorRemoteChannel;

__attribute__((visibility("hidden")))
@interface WebInspectorServerConnection : XXUnknownSuperclass {
@private
	WebInspectorRemoteChannel *_channel;	// 4 = 0x4
}
- (id)init;	// 0x8ca55
- (void)dealloc;	// 0x8cae9
- (void)clearChannel;	// 0x8ca3d
- (void)sendWebSocketMessage:(id)message;	// 0x8ca51
- (void)receivedWebSocketMessage:(id)message;	// 0x8ca99
@end
