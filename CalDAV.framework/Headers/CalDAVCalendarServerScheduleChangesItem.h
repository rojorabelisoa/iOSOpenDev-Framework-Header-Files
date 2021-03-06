/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/XXUnknownSuperclass.h>

@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : XXUnknownSuperclass {
	CoreDAVLeafItem *_dtstamp;	// 24 = 0x18
	CalDAVCalendarServerActionItem *_action;	// 28 = 0x1c
}
@property(retain) CoreDAVLeafItem *dtstamp;	// G=0x5f19; S=0x5ef5; @synthesize=_dtstamp
@property(retain) CalDAVCalendarServerActionItem *action;	// G=0x5f55; S=0x5f31; @synthesize=_action
- (id)init;	// 0x5c95
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x5e95
- (void)dealloc;	// 0x5f99
- (id)description;	// 0x5f6d
- (id)copyParseRules;	// 0x5cd1
// declared property getter: - (id)action;	// 0x5f55
// declared property setter: - (void)setAction:(id)action;	// 0x5f31
// declared property getter: - (id)dtstamp;	// 0x5f19
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x5ef5
@end
