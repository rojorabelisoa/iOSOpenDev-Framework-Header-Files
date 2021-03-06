/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class IUWildcatVideosViewController, IUFoldingTransitionView, IUWildcatVideoDetailViewController;

@interface IUAlbumGridViewControllerTransitionCache : XXUnknownSuperclass {
	unsigned _selectedAlbumIndex;	// 4 = 0x4
	IUWildcatVideosViewController *_wildcatViewController;	// 8 = 0x8
	IUWildcatVideoDetailViewController *_controllerToPush;	// 12 = 0xc
	IUFoldingTransitionView *_foldingTransitionView;	// 16 = 0x10
}
@property(retain, nonatomic) IUFoldingTransitionView *foldingTransitionView;	// G=0x6b09d; S=0x6b0ad; @synthesize=_foldingTransitionView
@property(retain, nonatomic) IUWildcatVideoDetailViewController *controllerToPush;	// G=0x6b069; S=0x6b079; @synthesize=_controllerToPush
@property(retain, nonatomic) IUWildcatVideosViewController *wildcatViewController;	// G=0x6b035; S=0x6b045; @synthesize=_wildcatViewController
@property(assign, nonatomic) unsigned selectedAlbumIndex;	// G=0x6b015; S=0x6b025; @synthesize=_selectedAlbumIndex
// declared property setter: - (void)setFoldingTransitionView:(id)view;	// 0x6b0ad
// declared property getter: - (id)foldingTransitionView;	// 0x6b09d
// declared property setter: - (void)setControllerToPush:(id)push;	// 0x6b079
// declared property getter: - (id)controllerToPush;	// 0x6b069
// declared property setter: - (void)setWildcatViewController:(id)controller;	// 0x6b045
// declared property getter: - (id)wildcatViewController;	// 0x6b035
// declared property setter: - (void)setSelectedAlbumIndex:(unsigned)index;	// 0x6b025
// declared property getter: - (unsigned)selectedAlbumIndex;	// 0x6b015
- (void)dealloc;	// 0x6afa1
@end
