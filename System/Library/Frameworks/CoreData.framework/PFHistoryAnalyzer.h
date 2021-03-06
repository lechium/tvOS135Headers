/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {

	PFHistoryAnalyzerOptions* _options;

}

@property (nonatomic,copy,readonly) PFHistoryAnalyzerOptions * options;              //@synthesize options=_options - In the implementation block
-(id)init;
-(void)dealloc;
-(PFHistoryAnalyzerOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(BOOL)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)instantiateNewAnalyzerContext;
-(id)newAnalyzerContextForStore:(id)arg1 sinceLastHistoryToken:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
@end

