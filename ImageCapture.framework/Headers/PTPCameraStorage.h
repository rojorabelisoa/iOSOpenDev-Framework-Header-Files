/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <ImageCapture/PTPCameraFolder.h>

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {
	NSMutableArray *_tempArrayOfAllObjectHandles;	// 20 = 0x14
	NSMutableArray *_tempArrayOfAllObjectHandlesToBeIgnored;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandles;	// G=0x18995; converted property
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandlesToBeIgnored;	// G=0x189a5; converted property
- (id)initWithStorageID:(unsigned long)storageID device:(id)device;	// 0x1c451
- (void)dealloc;	// 0x1c7e1
- (void)refreshInfo;	// 0x1c761
- (void)prime;	// 0x1c4c1
// converted property getter: - (id)tempArrayOfAllObjectHandles;	// 0x18995
// converted property getter: - (id)tempArrayOfAllObjectHandlesToBeIgnored;	// 0x189a5
@end
