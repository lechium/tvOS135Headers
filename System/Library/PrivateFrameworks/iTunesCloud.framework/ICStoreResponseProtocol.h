/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError, ICStoreDialogResponse;


@protocol ICStoreResponseProtocol <NSObject>
@property (nonatomic,copy,readonly) NSError * serverError; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@required
-(ICStoreDialogResponse *)dialog;
-(NSError *)serverError;

@end

