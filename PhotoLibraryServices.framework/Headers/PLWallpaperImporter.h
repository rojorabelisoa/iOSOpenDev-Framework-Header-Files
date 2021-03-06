/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLWallpaperImporter.h>
#import <PhotoLibraryServices/XXUnknownSuperclass.h>

@class NSArray, PLPhotoLibrary, PLManagedObjectContext, NSData;

@interface PLWallpaperImporter : XXUnknownSuperclass {
@private
	NSData *_wallpaperFileHash;	// 4 = 0x4
	NSArray *_allWallpaperURLs;	// 8 = 0x8
	PLPhotoLibrary *photoLibrary;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) PLManagedObjectContext *managedObjectContext;	// G=0x71021; 
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary;	// G=0x71049; S=0x71059; @synthesize
+ (id)posterImageURL;	// 0x70f6d
+ (void)importWallpaperAssetsIntoPhotoLibrary:(id)library;	// 0x70f09
// declared property setter: - (void)setPhotoLibrary:(id)library;	// 0x71059
// declared property getter: - (id)photoLibrary;	// 0x71049
// declared property getter: - (id)managedObjectContext;	// 0x71021
- (void)dealloc;	// 0x70f95
- (id)init;	// 0x70f7d
@end

@interface PLWallpaperImporter (Private)
@property(readonly, assign, nonatomic) NSArray *allWallpaperURLs;	// G=0x71809; 
- (void)addWallpaperURLsForModel:(id)model toURLs:(id)urls;	// 0x71915
// declared property getter: - (id)allWallpaperURLs;	// 0x71809
- (id)allExistingWallpaperAssets;	// 0x71755
- (void)importAll;	// 0x7163d
- (void)deleteAll;	// 0x71495
- (void)updateAsNeeded;	// 0x712c5
- (id)wallpaperFileHash;	// 0x710c5
- (id)initWithPhotoLibrary:(id)photoLibrary;	// 0x7107d
@end
