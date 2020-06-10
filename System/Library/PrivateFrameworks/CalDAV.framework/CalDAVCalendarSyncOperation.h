/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVOperation.h>

@protocol CalDAVCalendar;
@class NSError, NSString;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {

	NSError* _savedError;
	NSString* _nextCtag;
	NSString* _nextSyncToken;
	id<CalDAVCalendar> _calendar;
	NSError* _reportJunkError;
	unsigned long long _currentStage;
	BOOL _getScheduleTags;
	BOOL _getScheduleChanges;

}

@property (assign,nonatomic) id<CalDAVCalendarSyncDelegate> delegate; 
@property (assign,nonatomic) BOOL getScheduleTags;                                 //@synthesize getScheduleTags=_getScheduleTags - In the implementation block
@property (assign,nonatomic) BOOL getScheduleChanges;                              //@synthesize getScheduleChanges=_getScheduleChanges - In the implementation block
-(void)_finishWithError:(id)arg1 ;
-(void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6 ;
-(void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3 ;
-(id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2 ;
-(id)copyAllLocalURLsInFolderWithURL:(id)arg1 ;
-(BOOL)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3 ;
-(BOOL)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3 ;
-(BOOL)syncDeleteTask:(id)arg1 error:(id)arg2 ;
-(void)_reportJunk;
-(void)setGetScheduleTags:(BOOL)arg1 ;
-(void)setGetScheduleChanges:(BOOL)arg1 ;
-(BOOL)getScheduleTags;
-(BOOL)getScheduleChanges;
-(BOOL)setLocalScheduleTag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3 ;
-(void)recurrenceSplitAction:(id)arg1 failedWithError:(id)arg2 ;
-(void)recurrenceSplitAction:(id)arg1 completedWithUpdatedETag:(id)arg2 updatedScheduleTag:(id)arg3 createdURL:(id)arg4 createdETag:(id)arg5 createdScheduleTag:(id)arg6 ;
-(void)_performNextStage;
-(void)_advanceStage;
-(void)_splitRecurrences;
-(void)_syncCalendar;
-(id)_distantFutureEndDate;
-(void)_processAddedOrModified:(id)arg1 removed:(id)arg2 ;
-(void)_syncEventsForMerge;
-(id)initWithPrincipal:(id)arg1 calendar:(id)arg2 nextCtag:(id)arg3 nextSyncToken:(id)arg4 ;
-(void)syncCalendar;
@end

