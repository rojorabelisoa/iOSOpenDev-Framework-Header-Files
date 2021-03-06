/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <AppStoreUI/XXUnknownSuperclass.h>

@class NSArray, ASTextViewCell;

@interface ASConcernListDataSource : XXUnknownSuperclass {
	NSArray *_concerns;	// 20 = 0x14
	int _selectedConcernIndex;	// 24 = 0x18
	ASTextViewCell *_textViewCell;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) ASTextViewCell *textViewCell;	// G=0xa911; @synthesize=_textViewCell
@property(assign, nonatomic) int selectedConcernIndex;	// G=0xacdd; S=0xaced; @synthesize=_selectedConcernIndex
@property(retain, nonatomic) NSArray *concerns;	// G=0xaca9; S=0xacb9; @synthesize=_concerns
// declared property setter: - (void)setSelectedConcernIndex:(int)index;	// 0xaced
// declared property getter: - (int)selectedConcernIndex;	// 0xacdd
// declared property setter: - (void)setConcerns:(id)concerns;	// 0xacb9
// declared property getter: - (id)concerns;	// 0xaca9
- (id)_titleCellForIndexPath:(id)indexPath;	// 0xaad5
- (int)tableViewStyle;	// 0xaad1
- (int)numberOfRowsInSection:(int)section;	// 0xaa9d
- (int)numberOfSections;	// 0xaa6d
- (float)cellHeightForIndexPath:(id)indexPath;	// 0xaa11
- (id)cellForIndexPath:(id)indexPath;	// 0xa9bd
// declared property getter: - (id)textViewCell;	// 0xa911
- (void)dealloc;	// 0xa8bd
- (id)init;	// 0xa87d
@end
