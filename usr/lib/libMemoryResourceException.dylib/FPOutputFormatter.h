/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPOutputFormatter <NSObject>
@optional
-(void)printVmmapLikeOutputForProcess:(id)arg1 regions:(id)arg2;

@required
-(void)end;
-(void)printSummaryCategories:(id)arg1 total:(SCD_Struct_FP0*)arg2 hadErrors:(BOOL)arg3;
-(void)printProcessHeader:(id)arg1;
-(void)endProcessHeader:(id)arg1;
-(void)printProcessTotal:(id)arg1 forProcess:(id)arg2;
-(void)printProcessCategories:(id)arg1 total:(SCD_Struct_FP0*)arg2;
-(void)printSharedCategories:(id)arg1 sharedWith:(id)arg2 forProcess:(id)arg3 hasProcessView:(BOOL)arg4 total:(SCD_Struct_FP0*)arg5;
-(void)printProcessAuxData:(id)arg1;
-(void)printProcessesWithWarnings:(id)arg1 processesWithErrors:(id)arg2 globalErrors:(id)arg3;
-(void)printGlobalAuxData:(id)arg1;

@end

