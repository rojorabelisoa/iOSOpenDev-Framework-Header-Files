/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <WebBookmarks/WebBookmarkList.h>
#import <WebBookmarks/XXUnknownSuperclass.h>

@class NSString, NSMutableArray, WebBookmarkCollection;

@interface WebBookmarkList : XXUnknownSuperclass {
	NSMutableArray *_bookmarks;	// 4 = 0x4
	unsigned _bookmarkCount;	// 8 = 0x8
	unsigned _skipOffset;	// 12 = 0xc
	BOOL _customQuery;	// 16 = 0x10
	NSString *_query;	// 20 = 0x14
	unsigned _folderID;	// 24 = 0x18
	WebBookmarkCollection *_collection;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) unsigned folderID;	// G=0x229d; @synthesize=_folderID
@property(readonly, assign) unsigned bookmarkCount;	// G=0x227d; converted property
- (BOOL)stepThroughIndex:(unsigned)index;	// 0x2279
- (id)bookmarkAtIndex:(unsigned)index;	// 0x22ad
// converted property getter: - (unsigned)bookmarkCount;	// 0x227d
// declared property getter: - (unsigned)folderID;	// 0x229d
@end

@interface WebBookmarkList (Private)
- (id)initWithFolderID:(unsigned)folderID inCollection:(id)collection bookmarkCount:(unsigned)count skipOffset:(unsigned)offset includeHidden:(BOOL)hidden;	// 0xdd41
- (id)initWithBookmarksWhere:(id)bookmarksWhere collection:(id)collection bookmarkCount:(unsigned)count skipOffset:(unsigned)offset;	// 0xdf11
- (void)dealloc;	// 0xe00d
- (void)_moveBookmarkAtIndex:(unsigned)index toIndex:(unsigned)index2;	// 0xdde5
- (unsigned)_reverseOrderIndex:(unsigned)index;	// 0xdd29
@end
