/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRContainerHelper <NSObject>
@required
-(id)sharedFolderForURL:(id)arg1 error:(id*)arg2;
-(id)itemIDForURL:(id)arg1 error:(id*)arg2;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3;
-(id)fetchContainerForURL:(id)arg1;
-(id)fetchAllContainersByIDWithError:(id*)arg1;
-(BOOL)canFetchAllContainersByID;

@end

