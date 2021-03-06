/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNPropertyCellDelegate <NSObject>
@optional
-(id)sharedActionsDataSource;

@required
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
-(void)propertyCellDidChangeLayout:(id)arg1;
-(id)storeForPropertyCell:(id)arg1;
-(id)defaultValueForPropertyCell:(id)arg1;

@end

