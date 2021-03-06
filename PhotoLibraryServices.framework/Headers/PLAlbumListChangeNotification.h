/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLContainerChangeNotification.h>
#import <PhotoLibraryServices/PLAlbumListChangeNotification.h>

@class NSObject, NSDictionary;
@protocol PLAlbumContainer;

@interface PLAlbumListChangeNotification : PLContainerChangeNotification {
@private
	NSDictionary *_userInfo;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSObject<PLAlbumContainer> *albumList;	// G=0x678a1; 
@property(readonly, retain) NSDictionary *userInfo;	// G=0x67669; converted property
// declared property getter: - (NSObject *)albumList;	// 0x678a1
- (id)description;	// 0x677a9
// converted property getter: - (id)userInfo;	// 0x67669
- (id)name;	// 0x67659
- (void)dealloc;	// 0x67605
@end

@interface PLAlbumListChangeNotification (Internal)
+ (id)notificationWithAlbumList:(id)albumList snapshot:(id)snapshot changedAlbums:(id)albums;	// 0x678b1
- (id)_contentRelationshipName;	// 0x678f9
@end
