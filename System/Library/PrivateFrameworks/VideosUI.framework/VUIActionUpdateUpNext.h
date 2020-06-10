/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionUpdateUpNext : VUIAction {

	NSString* _state;
	NSString* _itemID;

}

@property (nonatomic,retain) NSString * state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * itemID;              //@synthesize itemID=_itemID - In the implementation block
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)initWithContextData:(id)arg1 ;
-(NSString *)itemID;
-(void)setItemID:(NSString *)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

