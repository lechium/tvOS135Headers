/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSControlTableCell.h>

@class UIView;

@interface PSSliderTableCell : PSControlTableCell {

	UIView* _disabledView;

}
-(void)setValue:(id)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)titleLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(void)setCellEnabled:(BOOL)arg1 ;
-(id)newControl;
-(id)controlValue;
@end

