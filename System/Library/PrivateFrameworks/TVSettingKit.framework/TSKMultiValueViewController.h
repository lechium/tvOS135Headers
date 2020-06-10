/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/TSKSettingItemEditingController.h>

@protocol TSKSettingItemEditingControllerDelegate;
@class TSKSettingItem, NSArray, NSString;

@interface TSKMultiValueViewController : UIAlertController <TSKSettingItemEditingController> {

	NSArray* _sortedLocalizedAvailableValues;
	NSArray* _sortedAvailableValues;
	TSKSettingItem* _editingItem;
	id<TSKSettingItemEditingControllerDelegate> _editingDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSKSettingItem * editingItem;                                                    //@synthesize editingItem=_editingItem - In the implementation block
@property (assign,nonatomic,__weak) id<TSKSettingItemEditingControllerDelegate> editingDelegate;              //@synthesize editingDelegate=_editingDelegate - In the implementation block
+(id)multiValueControllerWithSettingItem:(id)arg1 ;
-(void)setEditingDelegate:(id<TSKSettingItemEditingControllerDelegate>)arg1 ;
-(id<TSKSettingItemEditingControllerDelegate>)editingDelegate;
-(void)_updateAppearance;
-(TSKSettingItem *)editingItem;
-(void)setEditingItem:(TSKSettingItem *)arg1 ;
-(id)_sortedAvailableValues;
-(id)_sortedLocalizedAvailableValues;
-(void)_sortItemsIfNeeded;
@end

