/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISSingleton.h>
#import <iTunesStore/XXUnknownSuperclass.h>

@class NSLock, NSMutableDictionary, ISUniqueOperationContext, NSMutableArray;

@interface ISUniqueOperationManager : XXUnknownSuperclass <ISSingleton> {
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (id)sharedInstance;	// 0x2074d
+ (void)setSharedInstance:(id)instance;	// 0x206f9
- (id)_contextForOperation:(id)operation;	// 0x20c55
- (id)_activeContext;	// 0x20be1
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x20b51
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x20ac1
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x20a2d
- (id)lockWithIdentifier:(id)identifier;	// 0x208f9
- (void)checkOutOperation:(id)operation;	// 0x20825
- (void)checkInOperation:(id)operation;	// 0x207c1
- (void)dealloc;	// 0x20671
- (id)init;	// 0x205e9
@end
