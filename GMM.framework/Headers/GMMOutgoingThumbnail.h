/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>


@interface GMMOutgoingThumbnail : XXUnknownSuperclass {
	int _width;	// 4 = 0x4
	int _height;	// 8 = 0x8
}
@property(assign, nonatomic) int height;	// G=0x3c1cd; S=0x3c1dd; @synthesize=_height
@property(assign, nonatomic) int width;	// G=0x3c1ad; S=0x3c1bd; @synthesize=_width
// declared property setter: - (void)setHeight:(int)height;	// 0x3c1dd
// declared property getter: - (int)height;	// 0x3c1cd
// declared property setter: - (void)setWidth:(int)width;	// 0x3c1bd
// declared property getter: - (int)width;	// 0x3c1ad
- (void)writeTo:(id)to;	// 0x3c165
- (BOOL)readFrom:(id)from;	// 0x3c071
- (id)dictionaryRepresentation;	// 0x3bfc5
- (id)description;	// 0x3bf55
- (void)dealloc;	// 0x3bf29
@end
