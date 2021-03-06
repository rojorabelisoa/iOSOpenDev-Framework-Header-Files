/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLImageTable.h>
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/XXUnknownSuperclass.h>

@class NSMutableArray, NSString, NSDictionary;

@interface PLImageTable : XXUnknownSuperclass {
	int _format;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	CGSize _thumbnailSize;	// 12 = 0xc
	int _imageRowBytes;	// 20 = 0x14
	int _imageLength;	// 24 = 0x18
	int _entryLength;	// 28 = 0x1c
	BOOL _readOnly;	// 32 = 0x20
	BOOL _dying;	// 33 = 0x21
	int _fid;	// 36 = 0x24
	unsigned long _fileLength;	// 40 = 0x28
	int _entryCount;	// 44 = 0x2c
	unsigned long _segmentLength;	// 48 = 0x30
	int _segmentCount;	// 52 = 0x34
	NSMutableArray *_allSegments;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) BOOL isReadOnly;	// G=0xbb45; 
@property(readonly, assign, nonatomic) int imageLength;	// G=0xd8f5; @synthesize=_imageLength
@property(readonly, assign, nonatomic) int imageRowBytes;	// G=0xd8e5; @synthesize=_imageRowBytes
@property(readonly, assign, nonatomic) int imageHeight;	// G=0xba91; 
@property(readonly, assign, nonatomic) int imageWidth;	// G=0xba75; 
@property(readonly, assign, nonatomic) int imageFormat;	// G=0xd8d5; @synthesize=_format
@property(readonly, assign, nonatomic) NSString *path;	// G=0xd8c5; @synthesize=_path
@property(readonly, assign, nonatomic) NSDictionary *photoUUIDToIndexMap;	// G=0xc88d; 
@property(readonly, assign) int entryCount;	// G=0xc521; converted property
+ (CGRect)scaleSize:(CGSize)size toFitWithinSize:(CGSize)fitWithinSize;	// 0xcd01
+ (void)releaseSegmentCache;	// 0xb75d
// declared property getter: - (int)imageLength;	// 0xd8f5
// declared property getter: - (int)imageRowBytes;	// 0xd8e5
// declared property getter: - (int)imageFormat;	// 0xd8d5
// declared property getter: - (id)path;	// 0xd8c5
- (id)_tableDescription;	// 0xd6dd
- (void)rotateEntryAtIndex:(int)index byDegrees:(int)degrees withWhiteInsert:(int)whiteInsert;	// 0xd505
- (BOOL)entryAtIndexIsPlaceholder:(int)indexIsPlaceholder;	// 0xd4dd
- (void)setImage:(id)image forEntryAtIndex:(int)index videoDuration:(id)duration photoUUID:(id)uuid isPlaceholder:(BOOL)placeholder;	// 0xd4a9
- (void)setImageData:(const void *)data forEntryAtIndex:(int)index asset:(id)asset;	// 0xd275
- (void)_writeImage:(id)image withDuration:(id)duration photoUUID:(id)uuid toEntryAtIndex:(int)index isPlaceholder:(BOOL)placeholder;	// 0xcdd1
- (id)dataForEntryAtIndex:(int)index;	// 0xccf1
- (CGSize)imageSize;	// 0xccd5
- (void)_verifyThumbnailDataForIndex:(unsigned)index uuid:(id)uuid;	// 0xccd1
- (void)compactWithOccupiedIndexes:(id)occupiedIndexes;	// 0xccbd
- (id)preflightCompactionWithOccupiedIndexes:(id)occupiedIndexes;	// 0xcc99
- (BOOL)_compactWithOccupiedIndexes:(id)occupiedIndexes outPhotoUUIDToIndexMap:(id *)indexMap;	// 0xc955
// declared property getter: - (id)photoUUIDToIndexMap;	// 0xc88d
- (void)deleteEntryAtIndex:(int)index;	// 0xc80d
- (void)_setEntryAtIndex:(int)index imageData:(const void *)data actualImageSize:(CGSize)size;	// 0xc71d
- (void)_flushEntryAtAddress:(void *)address;	// 0xc709
- (void)_flushEntryAtAddress:(void *)address count:(int)count;	// 0xc63d
- (void)ensureIndexExists:(int)exists;	// 0xc62d
- (void)_addEntriesIfNecessaryForIndex:(int)index;	// 0xc5f5
- (void)_setEntryCount:(int)count;	// 0xc531
// converted property getter: - (int)entryCount;	// 0xc521
- (id)_mappedImageDataAtIndex:(int)index;	// 0xc23d
- (void)fileLengthChangedExternally;	// 0xc205
- (void)_updateSegmentCount;	// 0xbfa5
- (void)_reloadSegmentAtIndex:(int)index;	// 0xbf2d
- (void)_releaseSegment:(id)segment;	// 0xbee5
- (void)_releaseSegmentAtIndex:(int)index;	// 0xbe99
- (id)_segmentAtIndex:(int)index;	// 0xbb55
// declared property getter: - (BOOL)isReadOnly;	// 0xbb45
- (unsigned long)_segmentLength;	// 0xbb35
- (int)_fileDescriptor;	// 0xbb25
- (void)dealloc;	// 0xbaad
// declared property getter: - (int)imageHeight;	// 0xba91
// declared property getter: - (int)imageWidth;	// 0xba75
- (id)initWithPath:(id)path imageFormat:(int)format;	// 0xba3d
- (id)initWithPath:(id)path imageFormat:(int)format readOnly:(BOOL)only;	// 0xb785
@end

@interface PLImageTable (PLThumbnailManager)
- (void)preheatImageDataAtIndexex:(id)indexex;	// 0xdf31
- (id)imageDataAtIndex:(int)index width:(int *)width height:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width5 dataHeight:(int *)height6 dataOffset:(int *)offset;	// 0xdd75
- (BOOL)thumbnailForAsset:(id)asset existsAtIndex:(int)index;	// 0xdd11
- (CFDictionaryRef)currentAssetUUIDsToIndexesMapping;	// 0xdc41
@end
