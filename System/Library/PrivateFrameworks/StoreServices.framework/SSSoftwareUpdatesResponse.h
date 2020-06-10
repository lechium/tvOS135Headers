/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSArray;

@interface SSSoftwareUpdatesResponse : NSObject {

	NSError* _error;
	BOOL _failed;
	NSArray* _updateItems;

}

@property (readonly) NSError * error; 
@property (getter=isFailed,readonly) BOOL failed; 
@property (readonly) NSArray * updateItems; 
-(id)description;
-(void)dealloc;
-(NSError *)error;
-(BOOL)isFailed;
-(id)initWithError:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)copyUpdateItemDictionaries;
-(void)setUpdateItemsWithItemDictionaries:(id)arg1 ;
-(NSArray *)updateItems;
@end

