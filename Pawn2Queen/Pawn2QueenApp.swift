//
//  Pawn2QueenApp.swift
//  Pawn2Queen
//
//  Created by Bernadette Hoffman on 9/29/22.
//  This is the actual app where all of the content will be referenced for each page.

import SwiftUI

@main
struct Pawn2QueenApp: App {
    let persistenceController = PersistenceController.shared

    var body: some Scene {
        WindowGroup {
            LandingPage()
                .environment(\.managedObjectContext, persistenceController.container.viewContext)
        }
    }
}
