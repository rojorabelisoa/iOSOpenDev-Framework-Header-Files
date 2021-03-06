/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/GMMDateTime.h>
#import <GMM/XXUnknownSuperclass.h>


@interface GMMDateTime : XXUnknownSuperclass {
	long long _secsSinceEpoch;	// 4 = 0x4
	BOOL _hasTimeZoneOffsetMin;	// 12 = 0xc
	int _timeZoneOffsetMin;	// 16 = 0x10
}
@property(assign, nonatomic) int timeZoneOffsetMin;	// G=0x12d9d; S=0x12a89; @synthesize=_timeZoneOffsetMin
@property(assign, nonatomic) BOOL hasTimeZoneOffsetMin;	// G=0x12d7d; S=0x12d8d; @synthesize=_hasTimeZoneOffsetMin
@property(assign, nonatomic) long long secsSinceEpoch;	// G=0x12d51; S=0x12d69; @synthesize=_secsSinceEpoch
// declared property getter: - (int)timeZoneOffsetMin;	// 0x12d9d
// declared property setter: - (void)setHasTimeZoneOffsetMin:(BOOL)min;	// 0x12d8d
// declared property getter: - (BOOL)hasTimeZoneOffsetMin;	// 0x12d7d
// declared property setter: - (void)setSecsSinceEpoch:(long long)epoch;	// 0x12d69
// declared property getter: - (long long)secsSinceEpoch;	// 0x12d51
- (void)writeTo:(id)to;	// 0x12ce9
- (BOOL)readFrom:(id)from;	// 0x12be1
- (id)dictionaryRepresentation;	// 0x12b1d
- (id)description;	// 0x12aad
// declared property setter: - (void)setTimeZoneOffsetMin:(int)min;	// 0x12a89
- (void)dealloc;	// 0x12a5d
@end

@interface GMMDateTime (GMMProtoExtras)
- (id)description;	// 0xa835
@end
