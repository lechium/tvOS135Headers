/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface CPLLibraryState : NSObject {

	BOOL _disabled;
	NSDate* _disabledDate;
	NSDate* _deleteDate;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;              //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,copy) NSDate * disabledDate;                          //@synthesize disabledDate=_disabledDate - In the implementation block
@property (nonatomic,copy) NSDate * deleteDate;                            //@synthesize deleteDate=_deleteDate - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(NSDate *)disabledDate;
-(void)setDisabledDate:(NSDate *)arg1 ;
-(NSDate *)deleteDate;
-(void)setDeleteDate:(NSDate *)arg1 ;
@end
