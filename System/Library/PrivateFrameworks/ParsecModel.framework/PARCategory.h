/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ParsecModel.framework/ParsecModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class PARUsageEvent;

@interface PARCategory : NSManagedObject {

	BOOL isGoTo;
	BOOL isPunchout;
	BOOL isTop;
	int clientIntVal;
	int resultTypeIntVal;

}

@property (assign,nonatomic) int clientIntVal; 
@property (assign,nonatomic) BOOL isGoTo; 
@property (assign,nonatomic) BOOL isPunchout; 
@property (assign,nonatomic) BOOL isTop; 
@property (assign,nonatomic) int resultTypeIntVal; 
@property (nonatomic,retain) PARUsageEvent * usageEvent; 
+(id)fetchRequest;
-(BOOL)isTop;
-(int)clientIntVal;
-(void)setClientIntVal:(int)arg1 ;
-(BOOL)isGoTo;
-(void)setIsGoTo:(BOOL)arg1 ;
-(BOOL)isPunchout;
-(void)setIsPunchout:(BOOL)arg1 ;
-(void)setIsTop:(BOOL)arg1 ;
-(int)resultTypeIntVal;
-(void)setResultTypeIntVal:(int)arg1 ;
@end
