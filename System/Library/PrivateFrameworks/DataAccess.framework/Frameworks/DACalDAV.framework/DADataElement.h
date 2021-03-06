/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DADataElement <NSObject>
@required
-(BOOL)loadLocalItemWithAccount:(id)arg1;
-(void)setLocalItem:(void*)arg1;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1;

@end

