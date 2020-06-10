/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSError;

@interface _UISaveToCameraRollSaveItemsController : NSObject {

	BOOL _successToReport;
	/*^block*/id _saveCompletionBlock;
	NSArray* _itemsToSchedule;
	long long _pendingSaveCount;
	NSError* _errorToReport;

}

@property (nonatomic,readonly) id saveCompletionBlock;                  //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,readonly) NSArray * itemsToSchedule;               //@synthesize itemsToSchedule=_itemsToSchedule - In the implementation block
@property (nonatomic,readonly) long long pendingSaveCount;              //@synthesize pendingSaveCount=_pendingSaveCount - In the implementation block
@property (nonatomic,readonly) NSError * errorToReport;                 //@synthesize errorToReport=_errorToReport - In the implementation block
@property (nonatomic,readonly) BOOL successToReport;                    //@synthesize successToReport=_successToReport - In the implementation block
-(id)saveCompletionBlock;
-(id)initWithItems:(id)arg1 saveCompletionBlock:(/*^block*/id)arg2 ;
-(void)beginSaving;
-(void)beginSavingItem:(id)arg1 ;
-(void)_didCompleteSavingItem:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_noteDidCompleteSavingItem:(id)arg1 error:(id)arg2 ;
-(void)_invokeSaveCompletionBlock;
-(NSArray *)itemsToSchedule;
-(long long)pendingSaveCount;
-(NSError *)errorToReport;
-(BOOL)successToReport;
@end

