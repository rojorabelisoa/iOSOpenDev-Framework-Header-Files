/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Message-Structs.h>
#import <Message/XXUnknownSuperclass.h>

@class MFRecursiveLock, NSMutableDictionary;

@interface MFMessageNotificationCenter : XXUnknownSuperclass {
	MFRecursiveLock *_lock;	// 56 = 0x38
	NSMutableDictionary *_notificationMapping;	// 60 = 0x3c
	CFDictionaryRef _holders;	// 64 = 0x40
}
- (void)dealloc;	// 0x5be41
- (void)_mf_lock;	// 0x219d
- (void)_mf_unlock;	// 0x2389
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;	// 0x2605
- (id)copyAllObserversForNotificationName:(id)notificationName andObject:(id)object;	// 0x2225
- (void)postNotification:(id)notification;	// 0x4b99
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x20a9
- (void)_removeEntryForObserver:(id)observer name:(id)name object:(id)object;	// 0xf6e1
- (void)removeObserver:(id)observer name:(id)name object:(id)object;	// 0xf5b1
- (void)objectWillBeDeallocated:(id)object holder:(id)holder;	// 0x18a71
- (id)copyWithZone:(NSZone *)zone;	// 0x5be31
@end