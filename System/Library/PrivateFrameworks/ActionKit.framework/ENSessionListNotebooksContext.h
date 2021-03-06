/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSCountedSet, NSError;

@interface ENSessionListNotebooksContext : NSObject {

	NSMutableArray* _resultNotebooks;
	NSMutableArray* _linkedPersonalNotebooks;
	NSMutableDictionary* _sharedBusinessNotebooks;
	NSCountedSet* _sharedBusinessNotebookGuids;
	NSMutableDictionary* _businessNotebooks;
	NSMutableDictionary* _sharedNotebooks;
	long long _pendingSharedNotebooks;
	NSError* _error;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSMutableArray * resultNotebooks;                           //@synthesize resultNotebooks=_resultNotebooks - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkedPersonalNotebooks;                   //@synthesize linkedPersonalNotebooks=_linkedPersonalNotebooks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sharedBusinessNotebooks;              //@synthesize sharedBusinessNotebooks=_sharedBusinessNotebooks - In the implementation block
@property (nonatomic,retain) NSCountedSet * sharedBusinessNotebookGuids;                 //@synthesize sharedBusinessNotebookGuids=_sharedBusinessNotebookGuids - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * businessNotebooks;                    //@synthesize businessNotebooks=_businessNotebooks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sharedNotebooks;                      //@synthesize sharedNotebooks=_sharedNotebooks - In the implementation block
@property (assign,nonatomic) long long pendingSharedNotebooks;                           //@synthesize pendingSharedNotebooks=_pendingSharedNotebooks - In the implementation block
@property (nonatomic,retain) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completion;                                                //@synthesize completion=_completion - In the implementation block
-(NSError *)error;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSMutableDictionary *)sharedNotebooks;
-(void)setSharedNotebooks:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)resultNotebooks;
-(NSMutableArray *)linkedPersonalNotebooks;
-(void)setPendingSharedNotebooks:(long long)arg1 ;
-(long long)pendingSharedNotebooks;
-(NSMutableDictionary *)businessNotebooks;
-(NSMutableDictionary *)sharedBusinessNotebooks;
-(void)setBusinessNotebooks:(NSMutableDictionary *)arg1 ;
-(NSCountedSet *)sharedBusinessNotebookGuids;
-(void)setSharedBusinessNotebookGuids:(NSCountedSet *)arg1 ;
-(void)setSharedBusinessNotebooks:(NSMutableDictionary *)arg1 ;
-(void)setLinkedPersonalNotebooks:(NSMutableArray *)arg1 ;
-(void)setResultNotebooks:(NSMutableArray *)arg1 ;
@end

