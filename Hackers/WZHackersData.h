//
//  WZHackersData.h
//  Hackers
//
//  Created by Weiran Zhang on 05/11/2012.
//  Copyright (c) 2012 Weiran Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    WZNewsTypeTop, WZNewsTypeNew, WZNewsTypeAsk
} WZNewsType;

@interface WZHackersData : NSObject

+ (id)shared;

@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)fetchNewsOfType:(WZNewsType)type page:(NSInteger)page completion:(void (^)(NSError *error))completion;
- (void)addRead:(NSNumber *)id;
- (void)updatePost:(NSInteger)postID withContent:(NSString *)content;

@end
