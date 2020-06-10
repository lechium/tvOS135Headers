/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ENNoteStoreClient.h>

@protocol ENLinkedNoteStoreClientDelegate;
@class ENLinkedNotebookRef;

@interface ENLinkedNoteStoreClient : ENNoteStoreClient {

	id<ENLinkedNoteStoreClientDelegate> _delegate;
	ENLinkedNotebookRef* _linkedNotebookRef;

}

@property (nonatomic,retain) ENLinkedNotebookRef * linkedNotebookRef;                          //@synthesize linkedNotebookRef=_linkedNotebookRef - In the implementation block
@property (assign,nonatomic,__weak) id<ENLinkedNoteStoreClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)noteStoreClientForLinkedNotebookRef:(id)arg1 ;
-(id<ENLinkedNoteStoreClientDelegate>)delegate;
-(void)setDelegate:(id<ENLinkedNoteStoreClientDelegate>)arg1 ;
-(id)authenticationToken;
-(id)noteStoreUrl;
-(ENLinkedNotebookRef *)linkedNotebookRef;
-(void)setLinkedNotebookRef:(ENLinkedNotebookRef *)arg1 ;
@end
