/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <iLifeSlideshow/MCContainer.h>

@class NSSet, NSArray, NSMutableSet, NSRecursiveLock;

@interface MCContainerSerializer : MCContainer {
	NSMutableSet *mPlugs;	// 28 = 0x1c
	NSRecursiveLock *mPlugsLock;	// 32 = 0x20
	NSArray *mCachedOrderedPlugs;	// 36 = 0x24
	double mCachedDuration;	// 40 = 0x28
}
@property(readonly, assign) double duration;	// G=0xe095; 
@property(readonly, assign) NSArray *orderedPlugs;	// G=0xd31d; 
@property(readonly, assign) NSSet *plugs;	// G=0xdfe5; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0xd069
- (id)init;	// 0xcfa5
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0xe6fd
- (void)demolish;	// 0xe501
- (id)imprint;	// 0xe391
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0xe2f1
// declared property getter: - (double)duration;	// 0xe095
// declared property getter: - (id)plugs;	// 0xdfe5
- (unsigned)countOfPlugs;	// 0xdf89
- (id)plugAtIndex:(unsigned)index;	// 0xde35
- (id)addPlugForContainer:(id)container;	// 0xddd1
- (id)addPlugsForContainers:(id)containers;	// 0xdd9d
- (id)insertPlugForContainer:(id)container atIndex:(unsigned)index;	// 0xdd4d
- (id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;	// 0xd971
- (void)removePlugsAtIndices:(id)indices;	// 0xd6d1
- (void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;	// 0xd461
// declared property getter: - (id)orderedPlugs;	// 0xd31d
- (double)timeInForPlug:(id)plug;	// 0xd0e9
@end
