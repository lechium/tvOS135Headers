/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
#import <ProtectedCloudStorage/PCSCKKSOperation.h>

@class PCSCKKSItemModifyContext;

@interface PCSCKKSFetchCurrentOperation : PCSCKKSOperation {

	PCSCKKSItemModifyContext* _context;

}

@property (retain) PCSCKKSItemModifyContext * context;              //@synthesize context=_context - In the implementation block
-(void)start;
-(PCSCKKSItemModifyContext *)context;
-(void)setContext:(PCSCKKSItemModifyContext *)arg1 ;
-(id)initWithItemModifyContext:(id)arg1 ;
-(BOOL)haveAlternate;
-(void)fetchAlternate;
-(void)fetchComplete:(CFDataRef)arg1 point:(id)arg2 alternate:(BOOL)arg3 error:(CFErrorRef)arg4 ;
-(void)fetchCurrentItem:(id)arg1 viewhint:(id)arg2 complete:(/*^block*/id)arg3 ;
-(BOOL)shouldRelocate;
-(void)fetchPersistentRef:(id)arg1 alternate:(BOOL)arg2 ;
@end
